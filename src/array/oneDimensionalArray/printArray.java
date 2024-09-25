package array.oneDimensionalArray;

public class printArray {
    public static void main(String[] args) {
        int marks[] = {98, 96, 95, 85, 84, 86, 99, 100};
        System.out.print("Original Array: ");
        for (int i = 0; i < marks.length ; i++) {
            System.out.print (marks[i] +" ");
        }
        System.out.println();
        System.out.print("Reverse order of array: ");
        for (int i = marks.length - 1 ; i >= 0; i--) {
            System.out.print(marks[i]+ " ");
        }
        System.out.println();
        System.out.println("Marks length is : "+marks.length);
//        System.out.println(Arrays.toString(marks));

        System.out.println("For each loop applying on array : ");
        for (int element: marks) {
            System.out.print((element)+" ");
        }
    }
}
