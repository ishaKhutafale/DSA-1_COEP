/* Write a C program to insert an element at (beginning/last/at any position) in an 
array. Hint: shifting of array elements will be required.
*/
#include<stdio.h>
void main()
{
    int arr[20]={2,3,4,1,6};
    int e,p,n=5,i;
    printf("Array elements:\n");
    for(i=0;i<n;i++)
    {
            printf("%d  ",arr[i]);
    }
    printf("\nEnter the element you want to insert:\n");
    scanf("%d",&e);
    printf("Enter the position:");
    scanf("%d",&p);
    n++;
    for(i=n-1;i>=p;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[p-1]=e;
    printf("Updated array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}