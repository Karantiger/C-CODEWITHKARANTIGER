package array;

public class maxsubarray {
    public static void printMaxSubarray(int numbers[]){
        int maxsum = Integer.MIN_VALUE;
        for (int i = 0; i <numbers.length ; i++) {
            for (int j = i; j < numbers.length; j++) {
                int sum = 0;
                for (int k = i; k <j ; k++) {
                   sum +=numbers[k];
                }
                System.out.println(sum);
                if (maxsum<sum){
                    maxsum = sum;
                }
            }
        }
        System.out.print("Max sum is: "+maxsum);
    }
    public static void main(String[] args) {
        int numbers[] = {2,4,-1,-5,9,14,7};
        printMaxSubarray(numbers);
    }
}
