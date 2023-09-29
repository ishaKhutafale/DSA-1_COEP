/*
    12.Write a C program to convert the string from upper case to lower case and vice 
    versa with and without using the string library function
*/
#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int i;
   printf("\nEnter a string in lower case: ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
   printf("\nString in Upper Case = %s", s);

   printf("\nEnter a string in upper case: ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
   }
   printf("\nString in lower Case = %s", s);
  
   return 0;
}