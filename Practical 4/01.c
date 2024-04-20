#include<stdio.h>
int main()
{
    int num1,num2;
    char operation;

    printf("Enter the two number: ");
    scanf("%d %d",&num1, &num2);  

    printf("choose an operation (+, -, *, /):");
    scanf("%c", &operation);
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("Addition of two number:%d",num1 + num2);
        break;
    
    case '-':
        printf("Subtraction of two number:%d",num1 - num2);
        break;

    case '*':
        printf("Multiplication of two number:%d",num1 * num2);
        break;

    case '/':
        printf("Division of two number:%d",num1 / num2);
        break;

    default:
        printf("Not a valid operation");
    }
    return 0;
}