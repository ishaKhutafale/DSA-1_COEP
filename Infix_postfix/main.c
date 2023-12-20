#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "infix.h"

int precedence(char c)
{
	if(c=='+' || c=='-')
		return 1;
	else if(c=='*' || c=='/')
		return 2;
	else if(c=='^')
		return 3;
	return 0;
}

void infixToPostfix(char infix[], char postfix[]) 
{
	stack s;
	init(&s);
	int i=0;
	int j=0;
	char c;
	while((c=infix[i++]) != '\0')
	{
		if(isalnum(c))
		{
			postfix[j++]=c;
		}
		else if(c== '(' )
		{
			push(&s,c);
		}
		else if(c== ')')
		{
			while(!isEmpty(&s) && peek(&s) != '(')
			{
				postfix[j++]=pop(&s);
			}
			if (!isEmpty(&s) && peek(&s) == '(')
                	{  pop(&s); }// Discard the '(' from the stack
		}
		else if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
		{
			while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(c)) 
			{
                		postfix[j++] = pop(&s);
           	 	}	
            		push(&s, c);
		}
	}
	
	while(!isEmpty(&s))
	{
		postfix[j++]=pop(&s);
	}
	postfix[j]='\0';
}
int main()
{
	char infix[50],postfix[50];
	printf("enter the infix : ");
	scanf("%s",infix);
	infixToPostfix(infix,postfix);
	printf("Postfix expression : %s\n",postfix);
	return 0;
}
