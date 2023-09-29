/*
    7. Write a C program to calculate the sum of elements of each row and column of 
    matrix
*/
#include<stdio.h>
#define ROW 2
#define COL 2

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
    printf("\nRow Sum:\n");
    for(int i=0;i<ROW;i++)   
    {
        int rsum=0;
        for(int j=0;j<COL;j++)
        {
            rsum=rsum+m1[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
    printf("\nColumn Sum: \n");
    for(int i=0;i<ROW;i++)
    {
        int csum=0;
        for(int j=0;j<COL;j++)
        {
            csum=csum+m1[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }

}