#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "infix.h"

int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    return 0;
}

void reverseString(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void infixToPrefix(char infix[], char prefix[])
{
    stack s;
    init(&s);
    int i = 0;
    int j = 0;
    char c;

    // Reverse the infix expression
    reverseString(infix);

    while ((c = infix[i++]) != '\0')
    {
        if (isalnum(c))
        {
            prefix[j++] = c;
        }
        else if (c == ')')
        {
            push(&s, c);
        }
        else if (c == '(')
        {
            while (!isEmpty(&s) && peek(&s) != ')')
            {
                prefix[j++] = pop(&s);
            }
            if (!isEmpty(&s) && peek(&s) == ')')
            {
                pop(&s); // Discard the ')' from the stack
            }
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            while (!isEmpty(&s) && precedence(peek(&s)) > precedence(c))
            {
                prefix[j++] = pop(&s);
            }
            push(&s, c);
        }
    }

    while (!isEmpty(&s))
    {
        prefix[j++] = pop(&s);
    }

    prefix[j] = '\0';

    // Reverse the result to get the final prefix expression
    reverseString(prefix);
}

int main()
{
    char infix[50], prefix[50];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}

