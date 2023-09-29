/*
    Write a C program to delete an element from (beginning/last/at any position) in 
    an array. Hint: shift array elements and modify size variable.
*/
#include<stdio.h>
void main()
{
    int arr[20]={2,3,4,1,6};
    int p,n=5,i;
    printf("Array elements:\n");
    for(i=0;i<n;i++)
    {
            printf("%d  ",arr[i]);
    }
    printf("\nEnter the position of an element you want to delete:");
    scanf("%d",&p);

    if(p>=n+1)
    {
        printf("Deletion is not possible");
    }
    else
    {
        for(i=p-1;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("Updated array:\n");
        for(i=0;i<n;i++)
        {
            printf("%d  ",arr[i]);
        }
    }
    
}