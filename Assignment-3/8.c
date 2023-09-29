/*
    8. Write a C program to print upper and lower triangular matrix of a square matrix. 
   (Take a square matrix as input from user)

*/
#include<stdio.h>
#define ROW 3
#define COL 3

void main()
{
    int m1[ROW][COL],i,j;
    
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
    printf("\nUpper triangular matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(i<j)
            {
                printf("%d ",m1[i][j]);
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
    printf("\nLower triangular matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(i>j)
            {
                printf("%d ",m1[i][j]);
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }

}