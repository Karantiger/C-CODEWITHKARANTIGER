#include<stdio.h>
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selecsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    return;
}
int main(){
    int arr[100] = {10, 60, 80, 40, 20, 30};
    int n = 6;
    printarr(arr,n);
    selecsort(arr,n);
    printarr(arr,n);
    return 0;
}