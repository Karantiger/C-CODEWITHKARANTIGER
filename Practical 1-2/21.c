// Program for surface area of sphere
#include<stdio.h>
int main()
{
    float area, r;
    printf("Enter thr radius of sphere: ");
    scanf("%f",&r);
    area=(4.0/3.0)*3.14*r*r;
    printf("Surface area of sphere = %f\n",area);
    return 0;
}