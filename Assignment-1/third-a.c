// 3. Write a C program to check whether an alphabet entered by user is vowel or consonant
//    a. using if else statement. b. using switch statement

#include <stdio.h>

int main()
{
    char alp;
    printf("Enter any alphabet:\n");
    scanf("%c",&alp);
    if(alp == 'a' || alp =='A')
    {
        printf("The alphabet is vowel");
    }
    else if(alp == 'e' || alp =='E')
    {
        printf("The alphabet is vowel");
    }
    else if(alp == 'i' || alp =='I')
    {
        printf("The alphabet is vowel");
    }
    else if(alp == 'o' || alp =='O')
    {
        printf("The alphabet is vowel");
    }
    else if(alp == 'u' || alp =='U')
    {
        printf("The alphabet is vowel");
    }
    else
    {
        printf("The alphabetis consonant");
    }
    return 0;
}

