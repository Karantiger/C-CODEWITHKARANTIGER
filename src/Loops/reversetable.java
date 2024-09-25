package Loops;

import java.util.Scanner;

public class reversetable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = sc.nextInt();
        for (int i = 10; i >=1 ; i--) {
            System.out.println(n+ " * " + i + " = " +(n*i));
        }
    }
}
