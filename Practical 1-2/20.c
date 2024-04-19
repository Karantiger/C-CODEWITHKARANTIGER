// Program for volume of sphere
#include<stdio.h>
int main()
{
    float volume, r;
    printf("Enter the radius of sphere: ");
    scanf("%f",&r);
    volume=(4.0/3.0)*3.14*r*r*r;
    printf("Volume of sphere = %f\n",volume);
    return 0;
}