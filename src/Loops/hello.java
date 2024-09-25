package Loops;
import java.util.Scanner;
public class hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int number;
        System.out.print("Enter the number: ");
        number = scanner.nextInt();

        //ternary operator
        String result = (number > 0) ? "Positive" : "Negative";
        System.out.println(result);
        // Close the scanner
        scanner.close();
    }
}
