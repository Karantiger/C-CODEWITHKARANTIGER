package apnacollegeDSA;
import java.util.*;
public class largestnumber {
    public static int getlargest(int number[]) {
        int largest = Integer.MIN_VALUE;
        for (int i = 0; i<number.length; i++){
            if (largest<number[i]){
                largest = number[i];
            }
        }
        return largest;
    }
    public static void main(String[] args) {
        int number[]={2,3,5,8,7,9,6,10,23,54};
        System.out.println("Largest value is: "+getlargest(number));
    }
}
