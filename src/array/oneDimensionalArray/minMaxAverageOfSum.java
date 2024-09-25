package array.oneDimensionalArray;
import java.util.Arrays;

/* Write a program that creates integer array of 10 elements, accepts values of arrays and Find Sum, Average, Min, Max. */
public class minMaxAverageOfSum {
    public static void main(String[] args) {
        int arr[] ={58, 95, 96, 86, 85, 63, 87, 99 ,100, 76};

        /* ================== Maximum integer of an array =====================*/
        int max = arr[0];
        for (int i = 0; i < arr.length ; i++) {
            if (arr[i]>max){
                max = arr[i];
            }
        }
        System.out.println("Maximum of array element : "+max);

        /* ================== Minimum integer of an array =====================*/
        int min = arr[0];
        for (int i = 0; i < arr.length ; i++) {
            if (arr[i] < min){
                min = arr[i];
            }
        }
        System.out.println("Minimum of array element : "+min);

        /*========= Printing length of array =================*/
        System.out.println("Length of array : "+arr.length);

        /* =================== Sum of array and average of array =====================*/
        int sum = 0,avg = 0;
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
            avg = sum/ arr.length;
        }
        System.out.println(Arrays.toString(arr)); // Array to string printing
        System.out.println("Sum of arrays: "+sum);
        System.out.printf("Average of arrays: "+avg);
    }
}
