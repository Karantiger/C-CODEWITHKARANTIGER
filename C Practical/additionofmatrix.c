/*Write a C program to perform addition of two matrices.*/
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int matrix1[r][c], matrix2[r][c], sum[r][c];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}