// Program for Fahrenheit to celcius
#include<stdio.h>
int main()
{
    float Fahrenheit,celcius;
    printf("Enter Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    celcius=(Fahrenheit-32)/1.8;
    printf("Temperature in celcius = %f\n",celcius);
    return 0;
}