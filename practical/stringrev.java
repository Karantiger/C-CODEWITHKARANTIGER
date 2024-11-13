import java.util.Scanner;

public class stringrev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        
        // Reverse the string
        String reversed = new StringBuilder(str).reverse().toString();
        System.out.println("Reversed string: " + reversed);
        
        // Check if the original string is equal to the reversed string
        if (str.equals(reversed)) {
            System.out.println("String is a palindrome");
        } else {
            System.out.println("String is not a palindrome");
        }
        
        sc.close();
    }
}