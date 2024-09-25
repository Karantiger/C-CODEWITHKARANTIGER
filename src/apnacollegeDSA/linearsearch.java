package apnacollegeDSA;

public class linearsearch {
    public static int linear(String[] array, String key) {
        for (int i = 0; i< array.length; i++){
            if (array[i] == key){ // ()
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        String array[] = {"apple","banana","orange","cherry","date"};
        String key = "orange";
        int index = linear(array,key);
        if (index==-1){
            System.out.println("Record not found");
        }
        else {
            System.out.println("Key is at index: "+index);
        }
    }
}


//public class LinearSearchString {
//    public static void main(String[] args) {
//        String[] array = {"apple", "banana", "cherry", "date", "elderberry"};
//        String target = "cherry";
//
//        int index = linearSearch(array, target);
//
//        if (index != -1) {
//            System.out.println("Element '" + target + "' found at index: " + index);
//        } else {
//            System.out.println("Element '" + target + "' not found in the array.");
//        }
//    }
//
//    public static int linearSearch(String[] array, String target) {
//        for (int i = 0; i < array.length; i++) {
//            if (array[i].equals(target)) {
//                return i;
//            }
//        }
//        return -1;
//    }
//}
