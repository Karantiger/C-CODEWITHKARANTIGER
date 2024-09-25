package apnacollegeDSA;
import java.util.*;
public class smallestnumber {
    public static int getsmallest(int number[]) {
        int smallest = Integer.MAX_VALUE;
        for (int i = 0; i<number.length; i++){
            if (smallest>number[i]){
                smallest = number[i];
            }
        }
        return smallest;
    }
    public static void main(String[] args) {
        int number[]={2,3,5,8,7,9,6,10,23,54};
        System.out.println("Largest value is: "+getsmallest(number));
    }
}
