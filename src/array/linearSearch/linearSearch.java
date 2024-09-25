package array.linearSearch;
/* Find whether 14 exist in the array or not */
public class linearSearch {
    public static int linearsearch(int[] arr, int key){
        for (int i = 0; i <arr.length ; i++) {
            if (key == arr[i]){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = {18, 12, 9, 14, 77, 50};
        int key = 77;
        int index = linearsearch(arr,key);
        if (index==-1){
            System.out.println("Number is not exist");
        }
        else {
            System.out.println("Number is exist at index :"+index);
        }
    }
}
