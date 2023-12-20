#include<stdio.h>
#include "student.h"

void main()
{
    struct Student student[5];
    float totalMarks[3]={0};
    printf("Enter student information: \n");
    for(int i=0;i<5;i++)
    {
        printf("\nFor student %d :\n",i+1);
        printf("Enter roll number: ");
        scanf("%d",&student[i].roll_no);
        printf("Enter student full name (first name,middle name,last name): ");
        scanf("%s%s%s",student[i].name.firstName,student[i].name.middleName,student[i].name.lastName);
        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &student[i].day, &student[i].month, &student[i].year);

        printf("Enter marks for English, Math, and CS: ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &student[i].marks[j]);
            totalMarks[j]+= student[i].marks[j]; 
        }
    }

    display_info(student);
    average(totalMarks);
}
