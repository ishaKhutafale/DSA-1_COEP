#include<stdio.h>
#include "list.h"

int main()
{
	list L1;
	init(&L1);
	insert_end(&L1,1);
	insert_end(&L1,2);
	insert_end(&L1,8);
	insert_end(&L1,9);
	insert_end(&L1,12);
	insert_end(&L1,16);
	//insert_end(&L1,16);
	
	
	traverse(L1);
	reverse_even(&L1);
	traverse(L1);
	//remove_duplicates(&L1);
	traverse(L1);
	printf("\n");
	delete_beg(&L1);
	traverse(L1);
	printf("\n");
	insert_beg(&L1,8);
	traverse(L1);
	printf("\n");
	delete_end(&L1);
	traverse(L1);
	printf("\n");
	int len=length(L1);
	printf("%d\n",len);
	printf("%d\n",search(L1,3));
	list L3;
	init(&L3);
	insert_end(&L3,1);
	insert_end(&L3,2);
	insert_end(&L3,3);
	insert_end(&L3,2);
	//insert_end(&L1,9);
	insert_end(&L3,1);
	if(isPalindrome(L3))
	{
		printf("yes\n");
	}
	else{ printf("no\n"); }	
	
	destroy(&L1);
	return 0;
}


