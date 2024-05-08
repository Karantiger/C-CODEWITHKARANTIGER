/*Write a C program using user defined functions to determine whether the given string is palindrome or not.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("%s is not a palindrome.\n", str);
    } else {
        printf("%s is a palindrome.\n", str);
    }

    return 0;
}