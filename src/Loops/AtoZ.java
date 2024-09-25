package Loops;

import java.sql.SQLOutput;
import java.util.Scanner;

public class AtoZ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character: ");
        char ch;
        for(ch='A';ch<='Z';ch++){
            System.out.println(ch);
        }
    }
}
