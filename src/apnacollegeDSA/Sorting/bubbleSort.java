package apnacollegeDSA.Sorting;

public class bubbleSort {
    public static void bubbleSorting(int[] arr) {
        for (int turns = 0; turns <arr.length; turns++) {
            for (int i = 0; i < arr.length - 1 - turns ; i++) {
                if (arr[i] > arr[i+1]) {
                    //swapping
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }
    }
    public static void printArr(int arr[]){
        for (int i = 0; i < arr.length ; i++) {
            System.out.print(arr[i] +" ");
        }
    }
    public static void main(String[] args) {
        int arr[] = {3, 35, 10, 25, 15};
        bubbleSorting(arr);
        printArr(arr);
    }
}
