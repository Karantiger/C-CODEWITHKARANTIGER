/* 
3.Write a program to compute the electricity bill using else…if ladder. The steps for generating electricity bill are as follows. 
Rules for computing the unit charges:
No of Units Consumed Rate/Unit
For first 100 units Rs. 0.60
For next 200 units Rs. 0.90
For unit above 300 Rs. 1.2 
*/
#include<stdio.h>
int main()
{
    float units;
    printf("Enter the unit charge: ");
    scanf("%f",&units);

    if (units<=100)
    {
        printf("%f\n", units*0.60);
    }
    else if (units<=300)
    {
        printf("%f\n", 60+(units-100)*0.90);
    }
    else
    {
        printf("%f\n",60+180+(units-300)*1.2);
    }
    
    
    return 0;
}