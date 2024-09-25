package array;

public class Maxsubarrayprefix {
    public static void subarrayPrefix(int numbers[]){
        int currsum = 0;
        int maxsum = Integer.MIN_VALUE;
        int prefix[] = new int[numbers.length]; // create new array

        // finding prefix
        prefix[0] = numbers[0]; // at index zero kewal zero index ka hi sum hoga.
        for (int i = 1; i < prefix.length ; i++) { // initialisation from 1 because at o index only the sum of zero base element
            prefix[i] = prefix[i-1] + numbers[i];
        }

        //finding subarray sum
        for (int i = 0; i < numbers.length ; i++) {
            for (int j = 0; j < numbers.length ; j++) {
                currsum = i==0? prefix[j] : prefix[j]-prefix[i-1];
                if (maxsum <currsum){
                    maxsum = currsum;
                }
            }
        }
        System.out.println("Max sum is: "+maxsum);
    }
    public static void main(String[] args) {
        int numbers[] = {1,-2,6,-1,3};
        subarrayPrefix(numbers);
    }
}
