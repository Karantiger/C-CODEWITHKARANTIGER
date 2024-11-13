import java.util.Scanner;

public class SimpleMultipleCatch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter numerator: ");
            int numerator = scanner.nextInt();

            System.out.print("Enter denominator: ");
            int denominator = scanner.nextInt();

            // Attempt to divide
            int result = numerator / denominator;
            System.out.println("Result: " + result);

        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");

        } catch (NumberFormatException e) {
            System.out.println("Error: Please enter valid integers.");
            
         }
    }
}

