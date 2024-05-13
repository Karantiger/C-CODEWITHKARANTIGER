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


/*Output*/
/*
Enter the number of rows: 3
Enter the number of columns: 3
Enter elements of the first matrix:
Enter element a11: 1
Enter element a12: 2
Enter element a13: 3
Enter element a21: 4
Enter element a22: 5
Enter element a23: 6
Enter element a31: 7
Enter element a32: 8
Enter element a33: 9
Enter elements of the second matrix:
Enter element b11: 9
Enter element b12: 8
Enter element b13: 7
Enter element b21: 6
Enter element b22: 5
Enter element b23: 4
Enter element b31: 3
Enter element b32: 2
Enter element b33: 1

Sum of the two matrices:
10 10 10 
10 10 10 
10 10 10 


=== Code Execution Successful ===
*/
