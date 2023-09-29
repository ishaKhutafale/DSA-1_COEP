//2. Write a C program to print the ASCII value of all alphabets (both lower and upper case) using loop.
#include<stdio.h>  
  
int main()  
{  
    int c;  
  
    for(c = 0; c<= 255; c++)  
    {  
        printf("ASCII value of %c is %d\n", c, c);  
    }  
  
    return 0;  
}  