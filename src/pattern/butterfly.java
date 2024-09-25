package pattern;
/*
 ********
 ***  ***
 **    **
 *      *

*/
public class butterfly {
    public static void main(String[] args) {
        int n = 4;
        int spaces = 0;
        int stars = n;
        int currentline = 1;
        while (currentline<=n){
            for (int i = 1; i <=stars ; i++) {
                System.out.print("*");
            }
            for (int i = 1; i <=spaces ; i++) {
                System.out.print("  ");
            }
            for (int i = 1; i <=stars ; i++) {
                System.out.print("*");
            }
            System.out.println();
            currentline++;
            spaces = spaces + 1;
            stars--;
        }

    }
}
