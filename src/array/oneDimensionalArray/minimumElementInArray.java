package array.oneDimensionalArray;

public class minimumElementInArray {
    public static void main(String[] args) {
        int arr[] = {10, 15, 5, -1, -10, 6, 20};
        int min = arr[0];
        for (int i = 0; i <arr.length ; i++) {
            if (arr[i]<min){
                min = arr[i];
            }
        }
        System.out.println("Maximum number is at : "+min);
    }
}
