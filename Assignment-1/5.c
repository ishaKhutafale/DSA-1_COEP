/* 5. Write a C Program to display a day (Monday or Tuesday or Wednesday etc.) when a 
number (1 or 2 or 3 etc.) of day of a week is entered. Assume that on 1st day of a week 
is Monday (use switch case). */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number from 1 to 7:\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            printf("The day is monday");
            break;
        }
        case 2:
        {
            printf("The day is Tuesday");
            break;
        }
        case 3:
        {
            printf("The day is wednesday");
            break;
        }
        case 4:
        {
            printf("The day is thursday");
            break;
        }
        case 5:
        {
            printf("The day is friday");
            break;
        }
        case 6:
        {
            printf("The day is saturday");
            break;
        }
        case 7:
        {
            printf("The day is Sunday");
            break;
        }
        default:
        {
            printf("you entered invalid number");
        }
    }
    return 0;
}


