#include<stdio.h>
#include<stdlib.h>
#include "infix.h"

void init(stack *s)
{
	s->top=NULL;
	return;
}
int isEmpty(stack *s)
{
	return s->top==NULL;
}
void push(stack *s,char c)
{
	node *nn=(node*)malloc(sizeof(node));
	if(nn!=NULL)
	{
		nn->data=c;
		nn->next=s->top;
		s->top=nn;	
	}
}
char pop(stack *s)
{
	if(isEmpty(s))
	{
		printf("list is empty");
	}
	char value=s->top->data;
	node *temp=s->top;
	s->top=s->top->next;
	free(temp);
	return value;	
}	
char peek(stack *s)
{
	if(isEmpty(s))
	{
		printf("stack is empty");
	}
	return s->top->data;
}
