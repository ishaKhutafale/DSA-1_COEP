//6. Write C program to calculate area and circumference of circle using variables and 
// constant.

#include <stdio.h>
#define PI 3.14
int main()
{
    int r;
    printf("Enter radius of a circle:\n");
    scanf("%d",&r);
    float area= PI*r*r;
    float cir=2*PI*r;
    printf("Area of circle: %f\n",area);
    printf("circumferenceof circle: %f",cir);

    return 0;
}
