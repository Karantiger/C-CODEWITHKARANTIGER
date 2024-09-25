package Loops;

import java.util.Scanner;

public class recersechar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character: ");
        char ch;
        for (ch='Z';ch>='A';ch--){
            System.out.println(ch);
        }
    }
}
