package array.oneDimensionalArray;
import java.util.Scanner;
/*Create an array of 5 float and calculate their sum*/

public class sumOfArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float sum = 0.2f;
        float arr[] = new float[5];
        System.out.print("Enter the array of size 5: ");
        for (int i = 0; i <arr.length ; i++) {
            arr[i] = sc.nextFloat();
            System.out.print(arr[i] +" ");
            sum = sum + arr[i];

        }
        System.out.println();
        System.out.println("Sum of the floating number's : " +sum);
    }
}
