//Program for calculate area of circle
#include<stdio.h>
int main()
{
    float area, r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of circle = %f\n",area);
    return 0;
}