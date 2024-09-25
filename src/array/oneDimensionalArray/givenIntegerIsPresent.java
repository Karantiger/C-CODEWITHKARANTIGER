package array.oneDimensionalArray;
/*Write a program to find out whether a given integer is present in an array or not*/
public class givenIntegerIsPresent {
    public static int index(int arr[], int key){
        for (int i = 0; i < arr.length ; i++) {
            if (arr[i] == key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {89, 96, 68, 59, 57, 100};
        int key = 68;
        int linear = index(arr,key);
        if (linear == -1){
            System.out.println("Given integer is not present");
        }
        else {
            System.out.println("Given integer is present in the array: "+linear);
        }
    }
}
