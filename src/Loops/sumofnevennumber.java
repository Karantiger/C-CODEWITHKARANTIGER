package Loops;

import java.util.Scanner;

public class sumofnevennumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Number of Limit : ");
        int l =sc.nextInt();
        int sum = 0;
        for(int s=1;s<=l;s++)
        {
            if(s%2==0)
                sum = sum + s;

        }
            System.out.println("Sum of even natural number: " + sum);
        }
    }

