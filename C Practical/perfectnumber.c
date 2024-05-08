/*Write a C program to check whether given number is perfect number or Not.*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Factor of given no: %d\n",i);
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not a perfect number",n);
    }
    return 0;
}