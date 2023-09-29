/*
    10.Write a C program to count the number of vowels, consonants, digits and blank 
    spaces in a string entered by the user
*/
#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int v,c,d,b;
    v=c=d=b=0;
    printf("Enter the string : ");
    gets(str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            v++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            d++;
        }
        else if(str[i]==' ')
        {
            b++;
        }
        else{
            c++;
        }
    }
    printf("Number of vovel in string : %d\n",v);
    printf("Number of consonent in string : %d\n",c);
    printf("Number of digits in string : %d\n",d);
    printf("Number of blankspace in string : %d\n",b);
}