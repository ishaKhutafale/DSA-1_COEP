#include<stdio.h>
#include "array.h"

int main()
{

	array a,b;
	init(&a,10);
	init(&b,5);
	append(&a,1);
	append(&a,2);
	append(&a,3);
	append(&a,2);
	append(&a,1);
	
	if(isPalindrome(&a))
	{
		printf("it is palindrome\n");
	}
	else
	{
		printf("it is not\n");
	}
	
	append(&b,9);
	append(&b,10);
	display(a);
	insert_at_beg(&a,111);
	display(a);
	insert_at_pos(&a,2,2);
	display(a);
	remove_at_pos(&a,3);
	display(a);
	int mi=min(a);
	printf("\nMinimum value : %d \n",mi);
	int ma=max(a);
	printf("Maximum value : %d \n",ma);
	reverse(&a);
	printf("\nArray after reversing: \n");
	display(a);
	printf("\nmerged array:\n");
	display(merge(a,b));
	
	sort(&a);
	display(a);
	search(a,15);
	duplicates(&a);
	leftShift(&a);
	display(a);
	rightShift(&a);
	display(a);
	
	return 0;
	
}
