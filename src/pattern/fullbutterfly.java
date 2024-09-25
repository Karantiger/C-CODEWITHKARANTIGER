package pattern;

class fullbutterfly{
    public static void main(String[] args){
        int n =5;
        int num = 2*n-1;
        int spaces = (2 * n) - 2;
        int stars = 1;
        int currentline = 1;
        while (currentline <= num) {
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
            if (currentline<n)
            {
                stars++;
                spaces = spaces - 2;
            }
            else {
                stars--;
                spaces = spaces+2;
            }
            currentline++;
        }
    }
}
/*

class Main {
    public static void butterFlyPattern(int n){
        int total_number_of_line = 2*n-1;

        int stars = 1;
        int spaces = 2*n-2;

        int current_number_of_line = 1;

        while(current_number_of_line <= total_number_of_line){
            // print stars
            for(int i=1; i<=stars; i++){
                System.out.print("* ");
            }

            // print spaces
            for(int i=1; i<=spaces; i++){
                System.out.print("  ");
            }

            // print stars
            for(int i=1; i<=stars; i++){
                System.out.print("* ");
            }

            // prepare for next line
            System.out.println();
            if(current_number_of_line < n){
                stars++;
                spaces = spaces - 2;
            } else {
                stars--;
                spaces = spaces + 2;
            }
            current_number_of_line++;
        }
    }


    public static void main(String[] args) {
        int n = 5;
        butterFlyPattern(n);
    }
}

*/