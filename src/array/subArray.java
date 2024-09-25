package array;

public class subArray {
    public static void printsubarray(int numbers[]){
        for (int i = 0; i < numbers.length; i++) {
//            int start = i;
            for (int j = i; j < numbers.length; j++) {
//                int end = j;
                for (int k = i; k <j ; k++) {
                    System.out.print(numbers[k] +" ");
                }
                System.out.println();
            }

        }
    }
    public static void main(String[] args) {
        int numbers[] = {2,4,6,8,10};
        printsubarray(numbers);
    }
}

/*
 for (int i = 0; i < n; i++) {
            // Middle loop for the ending index of the subarray
            for (int j = i; j < n; j++) {
                // Inner loop to print the elements of the subarray from index i to j
                for (int k = i; k <= j; k++) {
                    System.out.print(arr[k] + " ");
                }
                System.out.println();  // Move to the next line after printing one subarray
            }
        }


        this is the main logic which prints all subarrays
Let's go through a dry run of the code with the array [2, 4, 6, 8, 10] to understand how it prints all the subarrays.

Initialization:
arr = [2, 4, 6, 8, 10]
n = arr.length = 5
Outer Loop (i):
This loop iterates through each possible starting index of the subarray.

Middle Loop (j):
This loop iterates through each possible ending index of the subarray that starts at index i.

Inner Loop (k):
This loop prints the elements from index i to j.

Dry Run Example:
Let's walk through the process step by step for each value of i.

When i = 0:
j = 0: k goes from 0 to 0, printing arr[0]:
Output: 2
j = 1: k goes from 0 to 1, printing arr[0] arr[1]:
Output: 2 4

j = 2: k goes from 0 to 2, printing arr[0] arr[1] arr[2]:
Output: 2 4 6
j = 3: k goes from 0 to 3, printing arr[0] arr[1] arr[2] arr[3]:
Output: 2 4 6 8
j = 4: k goes from 0 to 4, printing arr[0] arr[1] arr[2] arr[3] arr[4]:
Output: 2 4 6 8 10
When i = 1:
j = 1: k goes from 1 to 1, printing arr[1]:
Output: 4
j = 2: k goes from 1 to 2, printing arr[1] arr[2]:
Output: 4 6
j = 3: k goes from 1 to 3, printing arr[1] arr[2] arr[3]:
Output: 4 6 8
j = 4: k goes from 1 to 4, printing arr[1] arr[2] arr[3] arr[4]:
Output: 4 6 8 10
When i = 2:
j = 2: k goes from 2 to 2, printing arr[2]:
Output: 6
j = 3: k goes from 2 to 3, printing arr[2] arr[3]:
Output: 6 8
j = 4: k goes from 2 to 4, printing arr[2] arr[3] arr[4]:
Output: 6 8 10
When i = 3:
j = 3: k goes from 3 to 3, printing arr[3]:
Output: 8
j = 4: k goes from 3 to 4, printing arr[3] arr[4]:
Output: 8 10
. When i = 4:
j = 4: k goes from 4 to 4, printing arr[4]:
Output: 10
For each starting index i, the code iterates through every possible ending index j, and within that range, it prints the elements from i to j. This results in all possible subarrays being printed, starting from each index i to every possible j.
just go through with this
*/
