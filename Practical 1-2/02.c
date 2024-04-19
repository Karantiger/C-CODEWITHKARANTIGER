//Program with airthmetic operation with using third variable

#include<stdio.h>
int main()
{
    int a=10, b=20, add, sub, mul, div, mod;

    //Display input
    printf("The value of a=%d\n",a);
    printf("The value of b=%d\n",b);

    //Operation perform
    add = a+b;
    sub=a-b;
    mul= a*b;
    div=a/b;
    mod=a%b;

    //Display output results
    printf("addition of a and b=%d\n", add);
    printf("subtraction of a and b=%d\n", sub);
    printf("multiplication of a and b=%d\n", mul);
    printf("division of a and b=%d\n", div);
    printf("modulus of a and b=%d\n", mod);
    return 0;
}