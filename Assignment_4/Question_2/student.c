#include<stdio.h>
#include "student.h"

void average(float total_marks[])
{
    float averageMarks[3];
    for (int j = 0; j < 3; j++) {
        averageMarks[j] = total_marks[j] / 5.0; 
        
    }
    printf("Average Marks for English: %.2f\n",averageMarks[0]);
    printf("Average Marks for Maths: %.2f\n",averageMarks[1]);
    printf("Average Marks for CS: %.2f\n",averageMarks[2]);
    
}

void display_info(struct Student student[])
{
    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n",student[i].roll_no);
        printf("Name: %s %s %s\n",student[i].name.firstName,student[i].name.middleName,student[i].name.lastName);
        printf("Date of Birth: %d/%d/%d\n",student[i].day,student[i].month,student[i].year);
        printf("Marks (English, Math, CS): %.2f, %.2f, %.2f\n",student[i].marks[0], student[i].marks[1],student[i].marks[2]);
        printf("\n");
    }
    
}
