// Program for finding compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,y,c_i;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time in yrs: ");
    scanf("%f",&y);
    c_i=p*pow(1+(r/100),y)-p;
    printf("Compound interest = %f\n",c_i);
    return 0;
}