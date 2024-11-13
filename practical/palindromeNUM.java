import java.util.*;
public class palindromeNUM{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int num = sc.nextInt();
		int rev = 0;
		int org_num = num;

		while (num!=0) {
			rev = rev*10 + num%10;
			num = num/10;
		}
		if (org_num == rev) {
			System.out.print("Given number is palindrome number");
		}
		else {
            System.out.print("Given number is not palindrome number");
        }
		sc.close();
	}
	
}