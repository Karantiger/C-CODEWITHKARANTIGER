//Program for airthmetic operation

#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div,mod;

    //User input
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);

    //Display input values
    printf("The value of a=%d\n", a);
    printf("The value of b=%d\n", b);

     add=a+b;
     sub=a-b;
     mul=a*b;
     div=a/b;
     mod=a%b;

    //Display results
    printf("Addition of a and b is%d\n", add);
    printf("Subtraction of a and b is%d\n", sub);
    printf("Multiplication of a and b is%d\n", mul);
    printf("Divide of a and b is%d\n", div);
    printf("Modulus of a and b is%d\n", mod);
    return 0;
}
