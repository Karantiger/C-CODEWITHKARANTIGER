// Write a Program to check whether given number is Positive, Negative and Zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num>0)
    {
        printf("Given number is positive");
    }
    else if (num<0)
    {
        printf("Given number is negative");
    }
    else
    {
        printf("Given number is zero");
    }
    
    return 0;
}