/* Write a C program to reverse elements of an array. (For e.g., If input array is : 2 
4 5 1 7 8 Reversed array should be : 8 7 1 5 4 2) */

#include<stdio.h>

void arrayReverse(int arr[],int start,int end)
{
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }  
}
void main()
{
    int arr[20];
    int n,i,j=0;
    printf("Enter number of array elements you want:\n");
    scanf("%d",&n);
    
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    arrayReverse(arr,0,n-1);
    printf("Reverse Array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
   
}
