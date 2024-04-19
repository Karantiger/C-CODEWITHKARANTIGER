/* 5.Write a program to check whether input number is even or odd using conditional operator. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    num%2==0? printf("Given Number is even") : printf("Given number is odd");
    return 0;
}