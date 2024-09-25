/*
    *
   **
  ***
 ****
*****
*/
package pattern;

import java.util.Scanner;

public class basicpattern {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the number: ");
        int n = sc.nextInt();
        int space = n-1; // According to first line
        int stars = 1; // In first line
        int currentline = 1; // how many times loop is in running

        while (currentline<=n){
            // spaces print
            for (int i = 1; i <=space; i++) {
                System.out.print("  ");
            }
            // stars print
            for (int i = 1; i <=stars; i++) {
                System.out.print("* ");
            }
            // prepare for printing next line
            System.out.println();
            currentline++;
            space--;
            stars++;
        }
    }
}
