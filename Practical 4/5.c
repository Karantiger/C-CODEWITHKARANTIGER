// Write a program to check even or odd number using switch case statement
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    switch (num%2)
    {
    case 0:
        printf("Given number is even\n", num);
        break;
    case 1:
        printf("Given number is odd\n", num);
        break;

    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}