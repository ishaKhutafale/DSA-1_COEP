/*
    6. Write a C Program to print following triangle patterns using nested loop. [Take the number of 
    rows in the pattern as input from user. All asterisks (*) should be printed by a single printf 
    statement of the form printf( "%s", "*" ); .Use printf(" "); for blank space]
*/

#include<stdio.h>

    int main()  
{  
    int n,m;  
    char c='*';
    printf("Enter the number of rows: ");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<2*i;k++)  
       {  
         printf("%c",c);  
       }  
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}  
