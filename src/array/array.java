package array;

import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int marks[] = new int[100];
        System.out.println("Length of array: "+marks.length);
        System.out.println("Enter the marks of physics: ");
        marks[0] = sc.nextInt();

        System.out.println("Enter the marks of chemistry: ");
        marks[1] = sc.nextInt();

        System.out.println("Enter the marks of mathematics: ");
        marks[2] = sc.nextInt();

        System.out.println(marks[0]);
        System.out.println(marks[1]);
        System.out.println(marks[2]);
        System.out.println(marks[2] + 2);
        int percent = (marks[0] + marks[1] + marks[2])/3;
        System.out.println(percent);
    }
}
