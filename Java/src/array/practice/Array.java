package array.practice;

import java.util.Arrays;
import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {2, 3, 4, 5, 6};
        int num[] = new int[5];
        for (int i = 0; i <num.length ; i++) {
            num[i] = sc.nextInt();
        }
        System.out.println(Arrays.toString(num));
        System.out.println(Arrays.toString(arr));
    }
}
/*Output
1 2 3 4 5
[1, 2, 3, 4, 5]
[2, 3, 4, 5, 6]

*/