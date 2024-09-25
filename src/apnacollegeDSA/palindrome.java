package apnacollegeDSA;

import java.util.Scanner;

public class palindrome {
    public static int palindrome(int num){
        int lastdigit,reversenumber = 0;
        while(num>0){
            lastdigit = num%10;
            num= num/10;
            reversenumber = reversenumber*10 +num;
        }
        if (num==reversenumber){
            return reversenumber;
        }
        else {
            return -1;
        }

    }
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    System.out.println("Enter thr number: ");
    int num = sc.nextInt();
    int result = palindrome(num);
    if (result!=-1){
        System.out.println("palindrome");
    }
    }

}


