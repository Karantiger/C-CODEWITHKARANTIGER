package array;
import java.util.*;
public class largestNumber {
    public static int getLargest(int numbers[]){
        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;
        for (int i = 0; i < numbers.length ; i++) {
            if (largest < numbers[i]){ // agar largest number[i] se chhota ho jaye to use update kar de number of i se.
                largest = numbers[i];
            }
            if (smallest > numbers[i]) { // agar smallest number[i] se badda ho jaye to use update kar de number of i se.
                smallest = numbers[i];
            }
        }
        System.out.println("Smallest value: "+smallest);
        return largest;
    }
    public static void main(String[] args) {
    int number[] = {1,2,6,8,9,12,18,3,5};
        System.out.println("largest value :"+getLargest(number));
    }
}
