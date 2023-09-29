//1. Write a program to find sum of natural numbers using
//b) for loop

#include <stdio.h>
int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers is: %d",num,sum);
    return 0;
}