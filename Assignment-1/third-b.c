// 3. Write a C program to check whether an alphabet entered by user is vowel or consonant
//  b. using switch statement
#include <stdio.h>

int main()
{
    char alp;
    printf("Enter any alphabet:\n");
    scanf("%c",&alp);
    switch(alp)
    {
        case 'a':
        {
            printf("The alphabet is vowel");
            break;
        }
        case 'e':
        {
            printf("The alphabet is vowel");
            break;
        }
        case 'i':
        {
            printf("The alphabet is vowel");
            break;
        }
        case 'o':
        {
            printf("The alphabet is vowel");
            break;
        }
        case 'u':
        {
            printf("The alphabet is vowel");
            break;
        }
        default:
        {
            printf("The alphabet is consonant");
        }
    }
    return 0;
}

