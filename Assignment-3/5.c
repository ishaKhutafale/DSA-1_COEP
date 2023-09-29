/*
    . Write a menu driven C program to perform addition, subtraction and 
    multiplication operation on two matrices. (Take two matrices as input from user)

*/
#include<stdio.h>
#define ROW 2
#define COL 2

void matrixAddition(int m1[ROW][COL],int m2[ROW][COL])
{
    int sum[ROW][COL];
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            sum[i][j]= m1[i][j]+m2[i][j];
        }
    }
    printf("Addition of 2 matrix:\n");
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
}
void matrixSub(int m1[ROW][COL],int m2[ROW][COL])
{
    int sub[ROW][COL];
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            sub[i][j]= m1[i][j]-m2[i][j];
        }
    }
    printf("Subtraction of 2 matrix:\n");
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d  ",sub[i][j]);
        }
        printf("\n");
    }
}
void matrixMul(int m1[ROW][COL],int m2[ROW][COL])
{
    int mul[ROW][COL],s;
    for(int i=0;i<ROW;i++)
   {
        for(int j=0;j<COL;j++)
        {
            s=0;
            for(int k=0; k < ROW; k++) 
            s=s+ m1[i][k] * m2[k][j];
            mul[i][j] = s;
        }
   }

    printf("Multiplication of 2 matrix:\n");
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int m1[ROW][COL],m2[ROW][COL],sum[ROW][COL],i,j,op;
    
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

    printf("Enter second matrix elements:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

     printf("second matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }

    do
    {
        printf("\nEnter the operation number you want to perform:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            {
                matrixAddition(m1,m2);
                break;
            }
            case 2:
            {
                matrixSub(m1,m2);
                break;
            }
            case 3:
            {
                matrixMul(m1,m2);
                break;
            }
            case 4:
            {
                exit(0);
            }
        }
    } while (op!=4);
    
}


