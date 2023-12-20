#include<stdio.h>
#include<stdlib.h>
#include "array.h"

void init(array *arr,int size)
{
	arr->A=(int *)malloc(size * sizeof(int));
	arr->size=size;
	arr->length=0;
	return;
}
\
void append(array *arr, int ele)
{
	if(arr->length < arr->size)
		arr->A[arr->length++] = ele;
	return;	
}

void insert_at_pos(array *arr,int pos,int ele)
{
	if(pos >=0 || pos < arr->length)
	{
		int i=arr->length-1;
		while(i>=pos)
		{
			arr->A[i+1]=arr->A[i];
			i--;
		}	
		arr->A[pos]=ele;
		arr->length++;
	}
	return;
}

void insert_at_beg(array *arr, int ele)
{
	if(arr->length < arr->size)
	{
		int i=arr->length-1;
		while(i>=0)
		{
			arr->A[i+1]=arr->A[i];
			i--;
		}
		arr->A[0]=ele;
		arr->length++;
	}
	return;
}

void remove_at_pos(array *arr,int pos)
{
	int i=pos;
	if(pos >= 0 || pos < arr->length)
	{
		while(i< arr->length-1)
		{
			arr->A[i]=arr->A[i+1];
			i++;
		}
		arr->length--;
	}
	return;
}

void display(array arr)
{
	for(int i=0;i< arr.length;i++)
	{
		printf("%d  ",arr.A[i]);
	}
	printf("\n");
	return;
}

int min(array arr)
{
	int temp=arr.A[0];
	
	for(int i=1;i< arr.length;i++)
	{
		if(arr.A[i] < temp)
		{
			temp=arr.A[i];
		}
	}
	return temp;
}

int max(array arr)
{
	int temp=arr.A[0];
	
	for(int i=1;i< arr.length ;i++)
	{
		if(arr.A[i] > temp)
		{
			temp=arr.A[i];
		}
	}
	return temp;
}

void reverse(array *arr)
{
	int start=0, end=arr->length-1;
	while(start<end)
	{
		int temp= arr->A[start];
		arr->A[start]=arr->A[end];
		arr->A[end]=temp;
		start++;
		end--;
	}
	return;
}

array merge(array a,array b)
{
	array merged;
	init(&merged, a.length+b.length);
	for(int i=0;i< a.length;i++)
	{
		append(&merged,a.A[i]);
	}
	for(int i=0;i< b.length;i++)
	{
		append(&merged,b.A[i]);
	}
	return merged;
}

void sort(array *arr)
{
	for(int i=0;i < arr->length ;i++)
	{
		
		for(int j=i+1;j < arr->length ;j++)
		if(arr->A[i] > arr->A[j])
		{
			int temp=arr->A[i];
			arr->A[i]=arr->A[j];
			arr->A[j]=temp;
		}
	}
	return;
}	

void search(array arr,int ele)
{
		int p=0;
		for(int i=0;i< arr.length;i++)
		{
			if(arr.A[i]==ele)
			{
				printf("element found at index %d ",i);
				p=1;
				return;
			}	
			
		}
		if(p==0)
		{
		printf("element is not present in array");
		}
}

void duplicates(array *arr)
{
	int count=0,j=0;
	array unq;
	init(&unq,10);
	printf("unique array elements:\n");
	for(int i = 0 ;i < arr->length ;i++)
	{
		int unique=0;
		for(int j=i+1; j< arr->length ; j++)
		{
			if(arr->A[i]==arr->A[j])
			{
				count++;
				unique=1;
			}
			
		}
		if(!unique)
		{
			unq.A[j]=arr->A[i];
			j++;
			//printf("%d  ",arr->A[i]);
		}
	
	}
	unq.length=j;
	printf("Total number of duplicates are : %d \n",count);
	for(int i=0;i< unq.length ; i++)
	{
		printf("%d ",unq.A[i]);
	}
	
}
int isPalindrome(array *arr)
{
	int start=0;
	int end=arr->length-1;
	while(start < end )
	{
		if(arr->A[start] != arr->A[end])
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
void leftShift(array *arr)
{
	int first=arr->A[0];
	for(int i=0;i< arr->length-1;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->length-1]=first;
	return;
}

void rightShift(array *arr)
{

	printf("\n");
	int last =arr->A[arr->length-1];
	
	for(int i=arr->length-1; i>=0;i--)
	{
		arr->A[i+1]=arr->A[i];
	}
	arr->A[0]=last;
}
