/*
    5. Write a C program to change the case of an alphabet. ( Upper case <-> Lower Case)
*/

#include<stdio.h>

void main()
{
    char upper, lower; 
    int ascii;  
      
    // convert in lower case  
    printf (" Enter the Upper Case Character: ");  
    scanf (" %c", &upper);  
    ascii = upper + 32;  //A=65, 65+32=97=a
    printf (" %c character in Lower case is: %c", upper, ascii);  
      
    // convert in upper case  
    printf (" \n Enter the Lower Case Character: ");  
    scanf (" %c", &lower);  
    ascii = lower - 32;  
    printf (" %c character in the Upper case is: %c", lower, ascii);  
      
}