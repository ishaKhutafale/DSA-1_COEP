/* 4. Write a C program to input basic salary of an employee and calculate DA as per 
following rules:
For Basic Salary >= 10000 and <= 20000, 10% of basic salary.
For Basic Salary > 20000 and <= 50000, 15% of basic salary.
For Basic Salary > 50000 and <= 100000, 20% of basic salary.
For Basic Salary > 100000, DA is not given. */

#include <stdio.h>

int main()
{
    int salary;
    float da;
    
    printf("Enter basic Salary of employee:\n");
    scanf("%d",&salary);
    if(salary >= 10000 && salary <=20000)
    {
        da=(salary)*10/100;
        printf("The DA of employee for salary %d is : %f",salary,da);
    }
    else if(salary >= 20000 && salary <=50000)
    {
        da=(salary)*15/100;
        printf("The DA of employee for salary %d is : %f",salary,da);
    }
    else if(salary >= 50000 && salary <=100000)
    {
        da=(salary)*20/100;
        printf("The DA of employee for salary %d is : %f",salary,da);
    }
    else
    {
        printf("DA is not given");
    }

    return 0;
}

