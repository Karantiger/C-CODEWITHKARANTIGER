package array;
public class negativekadanesalgo {

    public static void findSmallestNegative(int[] numbers) {
        int smallest = Integer.MIN_VALUE; // Initialize to the smallest possible integer
        int currsum = 0;
        for (int i = 0; i < numbers.length; i++) {
            currsum += numbers[i];
            if (currsum<0){
                if (smallest < numbers[i]) { // agar smallest number[i] se badda ho jaye to use update kar de number of i se.
                    smallest = numbers[i];
                }
            }
        }
        smallest = Math.min(currsum, smallest);
        System.out.println(smallest);

    }

    public static void main(String[] args) {
        int[] numbers = {-1, -2, -8, -9, -5};
         findSmallestNegative(numbers);
    }
}
