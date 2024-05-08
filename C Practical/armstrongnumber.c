/*Write a C program to Check whether given number is Armstrong Number or Not.*/
#include<stdio.h>
int main()
{
    int n,i,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    for ( i = n; i > 0 ; i=i/10)
    {
        temp=i%10;
        sum=sum + (temp*temp*temp);
    }
    if (sum==n)
    {
        printf("Given number is armstrong\n");
    }
    else
    {
        printf("Given number is not armstrong\n");
    }

    return 0;
}