#include<stdio.h>

void main()
{
    int n,i,j,k;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j%2);
        }
        for(j=0;j< 2*n-2*(i+1);j++)  
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");

    }
}