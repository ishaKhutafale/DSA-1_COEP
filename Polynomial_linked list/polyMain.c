#include<stdio.h>
#include "polyList.h"

void main()
{
	int n, c, e;
	poly p1,p2;
	init(&p1);
	init(&p2);
		printf("Enter the number of terms in the polynomial 1: \n");
    		scanf("%d", &n);
	
    		for (int i = 0; i < n; i++)
    	 	{
    			printf("Term: %d\n",i+1);
       		 	printf("Enter coefficient: ");
        		scanf("%d",&c);
        		printf("\nEnter exponent: ");
        		scanf("%d",&e);
        		
        		create(&p1,c,e);
        	}
        	
        	printf("Enter the number of terms in the polynomial 2: \n");
    		scanf("%d", &n);
	
    		for (int i = 0; i < n; i++)
    	 	{
    			printf("Term: %d\n",i+1);
       		 	printf("Enter coefficient: ");
        		scanf("%d",&c);
        		printf("\nEnter exponent: ");
        		scanf("%d",&e);
        		
        		create(&p2,c,e);
        	}
        printf("polynomial 1\n");
        display(p1);
        printf("polynomial 2\n");
        display(p2);
        poly add,min;
        init(&add);
        init(&min);
        sum(&p1,&p2,&add);
        sub(&p1,&p2,&min);
   
}
