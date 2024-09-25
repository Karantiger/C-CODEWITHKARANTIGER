package apnacollegeDSA;
import java.util.*;
public class array {
    public static void main(String[] args) {
        int[] marks = new int[50];
        Scanner sc = new Scanner(System.in);
        System.out.println("Length of array :"+marks.length);
        System.out.println("Enter the marks of physics: ");
        marks[0] = sc.nextInt();
        System.out.println("Enter the marks of Chemistry: ");
        marks[1] = sc.nextInt();
        System.out.println("Enter the marks of Mathematics: ");
        marks[2] = sc.nextInt();
        System.out.println("Enter the marks of Data Structure: ");
        marks[3] = sc.nextInt();
        System.out.println("Physics: "+marks[0]);
        System.out.println("Chemistry: "+marks[1]);
        System.out.println("Mathematics: "+marks[2]);
        System.out.println("Data Structure: "+marks[3]);
        int percentage = (marks[0]+marks[1]+marks[2]+marks[3])/4;
        System.out.println("Percentage: "+ percentage + "%");
    }
}
