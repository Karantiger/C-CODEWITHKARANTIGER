#include <stdio.h>

void printarr(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubblesort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) { // Corrected 'i' to 'j'
            int temp;
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100] = {20, 10, 60, 80, 50, 60};
    int n = 6;

    printarr(arr, n);
    bubblesort(arr, n);
    printarr(arr, n);
    
    return 0;
}