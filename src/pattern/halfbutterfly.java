package pattern;
/*
Write a code for this pattern
 *      *
 **    **
 ***  ***
 ********
 */

public class halfbutterfly {
    public static void main(String[] args) {
        int n = 4;
        int spaces = (2 * n) - 2;
        int stars = 1;
        int currentline = 1;
        while (currentline <= n) {
            // print stars
            for (int i = 1; i <= stars; i++) {
                System.out.print("* ");
            }
            //print spaces
            for (int i = 1; i <= spaces; i++) {
                System.out.print("  ");
            }
            //print stars
            for (int i = 1; i <= stars; i++) {
                System.out.print("* ");
            }
            // prepare for next line
            System.out.println();
            currentline++;
            spaces  = spaces-2;
            stars++;
        }
//        int n = 8;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= i; j++) {
//                System.out.print("* ");
//            }
//            for (int k = 1; k <= (n - i) * 2; k++) {
//                System.out.print("  ");
//            }
//            for (int l = 1; l <= i; l++) {
//                System.out.print("* ");
//            }
//            System.out.println();
//
//        }
    }
}
