/*
    Write a C program to read n integer numbers into an array and find the average 
    of largest two of the given numbers without sorting the array.
*/

#include<stdio.h>

void main()
{
    int arr[5],i,l1,l2,temp;
    float avg;
    printf("Enter the array elements:\n");

    for(i=0;i<5;i++)
    {
            scanf("%d",&arr[i]);
    }

    l1=arr[0];
    l2=arr[1];
    if(l1<l2)
    {
        temp=l1;
        l1=l2;
        l2=temp;
    }
    for(i=2;i<5;i++)
    {
        if(arr[i]>=l1)
        {
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>=l2)
        {
            l2=arr[i];
        }
    }
    avg=(float)(l1+l2)/2;
    printf("The average of largest 2 numbers is %f ",avg);
    
}