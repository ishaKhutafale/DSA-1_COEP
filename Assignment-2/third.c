//3. Write a C Program to find sum of digits at even location in a given number. Digits are 
//   numbered from 0 to n-1 from right to left. (For e.g., user entered 54823 so sum of 5+8+3 = 16)

#include<stdio.h>

void main()
{
    int num,loc,sum,r;
    printf("Enter the number: ");
    scanf("%d",&num);

    sum=0;
    loc=0;
    while(num != 0){
		r = num % 10; 
		num = num/ 10; 
		if(loc % 2 == 0){
			sum += r;	
		}
		loc++;
	}
	
	printf("sum of digits at even location is : %d\n",sum);

	
}