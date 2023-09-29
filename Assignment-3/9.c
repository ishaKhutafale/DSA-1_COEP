/*
    9. Write a menu driven C program to perform operations such as (length, copy, 
    compare, concat, reverse, substring) on string using/ without using standard 
    library function
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char str1[]="xyz";
    char str2[]="hello ";
    char str3[]="abc";
    int n;
    do
    {
        printf("\nEnter the operation number you have to perform:\n1. String Length\n2. String copy\n3.String compare\n4.String concat\n5.String reverse\n6.string substring\n7.Exit\n");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
            {
                int l=strlen(str1);
                printf("Length of string 1: %d",l);
                break;
            }
            case 2:
            {
                printf("String 1 before copy: %s\n",str1);
                strcpy(str1,str2);
                printf("String 1 after copy: %s",str1);
                break;
            }
            case 3:
            {
                if(strcmp(str1,str2)==0)
                {
                    printf("Both strings are same\n");
                }
                else{
                    printf("Both strings are different\n");
                }
                break;
            }
            case 4:
            {
                strcat(str2,str3);
                printf("Strings after concatination: %s",str2);
                break;
            }
            case 5:
            {
                printf("\nReverse of abc is %s:",str3,strrev(str3));
                break;
            }
            case 6:
            {
                int p;
                printf("\nenter the position from where you have to print the sub string:");
                scanf("%d",&p);
                for(int i=p-1;i<strlen(str2);i++)
                {
                    printf("%c",str2[i]);
                }
                break;
            }
            case 7:
            {
                exit(0);
            }

        }
    } while (n!=7);
    
}
