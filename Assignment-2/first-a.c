//1. Write a program to find sum of natural numbers using
// a) while Loop 
#include<stdio.h>

void main()
{
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = 1;
    while (i <= num) {
        sum += i;
        i++;
    }
    printf("Sum of first %d natural numbers is: %d",num,sum);
   
}
