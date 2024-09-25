package array.oneDimensionalArray;
/*WAP to find maximum element in array */
public class maximumElementInArray {
    public static void main(String[] args) {
        int arr[] = {10, 15, 5, -1, -10, 6, 20};
        int max = arr[0];
        for (int i = 0; i <arr.length ; i++) {
            if (arr[i]>max){
                max = arr[i];
            }
        }
        System.out.println("Maximum number is at : "+max);
    }
}
