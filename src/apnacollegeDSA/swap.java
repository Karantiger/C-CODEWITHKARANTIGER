package apnacollegeDSA;

import java.util.Scanner;

public class swap {
    public static void swapoftwonum(int x, int y){
        int temp = x+y;
        x = temp - x;
        y = temp - y;
        System.out.println("Value of X "+ x +" and Value of Y "+y);

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two digits: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        swapoftwonum(a,b);
    }
}
