package array;

public class Kadanealgorithims {
    public static void kadanesAlgorithm(int numbers[]){
        int maxsum = Integer.MIN_VALUE;
        int currsum =0;
        for (int i = 0; i < numbers.length; i++) {
            currsum += numbers[i];
            if (currsum<0){
                currsum = 0;
            }
            maxsum = Math.max(currsum, maxsum);
        }
        System.out.print("Our max subarray sum is: "+maxsum);
    }
    public static void main(String[] args) {
        int numbers[] ={-2,-3,4,-1,-2,1,5,-3};
        // int numbers[] = {-2,-5,-9,-10,-15};
        kadanesAlgorithm(numbers);
    }
}


//  another question is if int numbers[] = {-1,-2,-8,-9,-5} using kadanes algorithm to print smallest negative number //