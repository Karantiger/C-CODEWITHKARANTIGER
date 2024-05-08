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