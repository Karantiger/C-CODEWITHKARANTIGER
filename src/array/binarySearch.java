package array;

public class binarySearch {
    public static int binarySearch(int numbers[], int key){
        int start=0, end = numbers.length-1;
        while (start<=end){
            int mid = (start + end)/2;
            if (numbers[mid] == key){
                return mid;
            }
            if (numbers[mid]<key){
                start = mid+1;
            }else {
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
    int numbers[] = {2,4,8,9,10,15,26,5,6,7};
    int key = 10;
    int index = binarySearch(numbers,key);
    if (index==-1){
        System.out.println("Not found");
    }else {
        System.out.println("Binary search at index :"+index);
    }
    }
}












