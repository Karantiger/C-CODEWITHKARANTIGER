/*Write a C program to perform addition, subtraction, division & multiplications of two numbers.*/

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    printf("Addition=%d\n",c);
    printf("Subtraction=%d\n",d);
    return 0;
}

/* Output */
/*
 Enter two numbers
12 32
Addition=44
Subtraction=-20
*/
