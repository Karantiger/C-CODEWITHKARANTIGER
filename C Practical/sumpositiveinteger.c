/*Write a C program to find the sum of individual digits of a given positive  integer.*/
#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("Sum of positive integer: %d\n",sum);
        return 0;
}