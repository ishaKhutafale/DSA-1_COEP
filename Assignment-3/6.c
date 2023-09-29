/*
    6. Write a C program to print and find sum of diagonal elements of a matrix.
*/
#include<stdio.h>
#define ROW 2
#define COL 2

void main()
{
    int m1[ROW][COL],sum=0,i,j;
    
    printf("Enter first matrix elements:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

     printf("first matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix diagonal elements:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(i==j)
            {
                printf("%d ",m1[i][j]);
                sum+=m1[i][j];
            } 
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Sum of diagonal elements of matrix is: %d ",sum);

}