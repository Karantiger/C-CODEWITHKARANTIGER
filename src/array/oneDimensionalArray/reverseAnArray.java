package array.oneDimensionalArray;
/*WAP to print a reverse of an array*/
public class reverseAnArray {
    public static void main(String[] args) {
        int arr[] = {100, 99, 98, 97, 96, 95};
        System.out.print("Original array: ");
//        for (int i = 0; i < arr.length ; i++) {
//            System.out.print(arr[i]+ " ");
//        }
        // for-each loop
        for (int j : arr) {
            System.out.print(j + " ");
        }

        System.out.println();
        System.out.print("Reverse of an array: ");
        for (int i = arr.length - 1; i >=0 ; i--) {
            System.out.print(arr[i]+ " ");
        }

    }
}
