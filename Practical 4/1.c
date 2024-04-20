// write a program to perform airthmetic operation using switch case statement
#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation); // Add a space before %c to consume the newline character

    switch (operation)
    {
        case '+':
            printf("Addition of two numbers: %d", num1 + num2);
            break;
        case '-':
            printf("Subtraction of two numbers: %d", num1 - num2); // Change the message to subtraction
            break;
        case '*':
            printf("Multiplication of two numbers: %d", num1 * num2); // Change the message to multiplication
            break;
        case '/':
            if (num2 != 0) {
                printf("Division of two numbers: %d", num1 / num2); // Change the message to division
            } else {
                printf("Error: Division by zero!");
            }
            break;
        default:
            printf("Not a valid operation");
    }

    return 0;
}