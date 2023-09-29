//7. Write a C program to perform for different unit conversion (Fahrenheit to Celsius)
#include <stdio.h>

int main()
{
    float fa, cel;
   
   printf("Enter Fahrenheit:");
   scanf("%f",&fa);
   cel = (fa-32)*5/9;
   printf("Celsius: %f ", cel);
   return 0;
}
