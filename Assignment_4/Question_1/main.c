#include<stdio.h>
#include<stdlib.h>
#include "distance.h"

void main()
{
	int option;
	dis d1,d2;
	do
	{
	printf("\n\n******** MAIN MENU *********\n1. Read the distances\n2. Display the distances\n3. Add the distances\n4. Subtract the distances\n5. EXIT\n");
	printf("Enter your choice: ");
	scanf("%d",&option);
	
		switch(option)
		{
			case 1:
			{
				printf("\nEnter the first distance in kms and meters:");
				scanf("%d%d",&d1.kms,&d1.m);
				printf("\nEnter the second distance in kms and meters:");
				scanf("%d%d",&d2.kms,&d2.m);
				break;
			}
			case 2:
			{
				printf("\n The first distance is: %d kms %d metres ",d1.kms,d1.m); 
             			printf("\n The second distance is: %d kms %d metres ",d2.kms,d2.m); 
				break;
			}
			case 3:
			{
				add_distance(d1,d2);
				break;
			}
			case 4:
			{
				sub_distance(d1,d2);
				break;
			}
			case 5:
			{
				exit(0);
				break;
			}
		}
	}while(option != 5);
	
}	
