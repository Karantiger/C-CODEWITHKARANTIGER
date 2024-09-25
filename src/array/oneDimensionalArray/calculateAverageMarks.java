package array.oneDimensionalArray;
/* Calculate the average marks from an array containing marks of all students in physics using for-each loop*/
public class calculateAverageMarks {
    public static void main(String[] args) {
        int physics[] = {95, 96, 85, 87, 69, 75};
        int avg = 0;
        for (int sum : physics){
            avg = avg + sum;
        }
        System.out.println(avg);
    }
}
