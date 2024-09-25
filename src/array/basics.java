package array;
import java.util.Scanner;
public class basics {
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Array Size:");
        n=sc.nextInt();
        int[] array = new int[n];
        System.out.println("Enter Array elements: ");
        for(int i=0; i<n; i++)
        {
            array[i]=sc.nextInt();
        }
        System.out.println("Display array element: ");
        for (int i=0; i<n; i++)
        {
            System.out.println(array[i]);
        }
    }
}


/*
 import java.util.Scanner;
    public class Test
    {
        public static void main(String[] args)
        {
            int n;
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter Array Size:");
            n=sc.nextInt();
            int[] array = new int[n];
            System.out.println("Enter Array elements: ");
            for(int i=0; i<n; i++)
            {
                array[i]=sc.nextInt();
            }
            System.out.println("Display array element: ");
            for (int i=0; i<n; i++)
            {
                System.out.println(array[i]);
            }
        }
    }
*/