// 2. Write a C program to find largest number among 3 numbers using ternary operator 
// (conditional operator i.e. ?:)

#include <stdio.h>

int main()
{
    int a,b,c,large;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    large = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The largest number is %d",large);

    return 0;
}