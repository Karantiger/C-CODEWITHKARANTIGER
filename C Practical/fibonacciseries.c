/*Write a C program to generate the first n terms of the Fibonacci sequence.*/
#include<stdio.h>
int main()
{
    int num,a=0,b=1,c;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 0; i <=num; i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}