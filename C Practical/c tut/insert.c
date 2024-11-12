#include<stdio.h>
int Insersort(int arr[], int n, int elements, int capacity, int index){
    if (n>=capacity)
    {
        return -1;
    }
    for (int i = n-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = elements;
    return 1;
    
}

void printarr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[100] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int elements  = 70;
    int index = 6;

    printarr(arr, n);
    Insersort(arr, n, elements, 100, index);
    n++;
    printarr(arr, n);
    return 0;
}