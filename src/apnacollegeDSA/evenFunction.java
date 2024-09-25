package apnacollegeDSA;

import java.util.Scanner;

public class evenFunction {
    public static int number(int num) {
        System.out.println(num % 2 == 0);
        return num;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter t number: ");
        int n = sc.nextInt();
        number(n);
    }
}
