/*Write a C program to check whether given number is strong number or Not.*/

#include <stdio.h>
int main() {
    int number, originalNumber, sum = 0, digit, factorial;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number > 0) {
        digit = number % 10;
        factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if (sum == originalNumber) {
        printf("%d is a strong number.\n", originalNumber);
    } else {
        printf("%d is not a strong number.\n", originalNumber);
    }

    return 0;
}