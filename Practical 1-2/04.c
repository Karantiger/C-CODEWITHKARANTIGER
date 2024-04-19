//Program for airthmetic operation with using float

#include<stdio.h>
int main()
{
        float a,b;
        // Display input
        printf("Enter the value of A =");
        scanf("%f",&a);
        printf("Enter the value of B =");
        scanf("%f",&b);

        //Display input
        printf("The value of a is%f\n",a);
        printf("The value of b is%f\n",b);

        //Display output result
        printf("Addition of A and B is %f\n", a+b);
        printf("Subtraction of A and B is %f\n", a-b);
        printf("Multiplication of A and B is %f\n",a*b);
        printf("Division of A and B is %f\n",a/b);
        return 0;
}