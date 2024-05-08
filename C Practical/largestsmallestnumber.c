/*Write a C program to find both the largest and smallest number in a list of integers.*/
#include <stdio.h>

int main() {
    int n, num, largest, smallest;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Input the first number to initialize largest and smallest
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = num;
    smallest = num;

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }

        if (num < smallest) {
            smallest = num;
        }
    }

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}