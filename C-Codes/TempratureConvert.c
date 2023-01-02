#include<stdio.h>

float c, f;
int main()
{
    printf("Enter the Temprature in Fahrenheit: ");
    scanf("%f",&f);

    c = (5.0/9.0)*(f - 32);

    printf("Enter the Temprature in Celsius: %f", c);

    return 0;


}