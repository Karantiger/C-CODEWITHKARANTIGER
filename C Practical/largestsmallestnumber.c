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

/*Output
Enter the number of integers: 5
Enter number 1: 12
Enter number 2: 64
Enter number 3: 86
Enter number 4: 59
Enter number 5: 02
The largest number is: 86
The smallest number is: 2


=== Code Execution Successful ===
*/
