// Program for finding simple interest
#include<stdio.h>
int main()
{
    float P,N, SI,R;
    printf("Enter the principle amount: ");
    scanf("%f",&P);
    printf("Enter the Numbers of yrs: ");
    scanf("%f",&N);
    printf("Enter the rate of interest: ");
    scanf("%f",&R);
    SI=(P*N*R)/100;
    printf("Simple Interest = %f\n",SI);
    return 0 ;

}