package apnacollegeDSA;

import java.util.Scanner;

public class SUMOFDIGIT {
    public static int sum (int num){
        int sum = 0;
        while(num>0){
            int lastdigit = num%10;
            num = num/10;
            sum = sum+lastdigit;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int n = sc.nextInt();
        int ans =  sum(n);
        System.out.println(ans);
    }
}
