package array;

public class passbyreference {
    public static void update(int marks[]){
        for (int i = 0; i < marks.length; i++) {
            marks[i] = marks[i] + 1;
        }
    }
    public static void main(String[] args) {
        int marks[] ={99,96,98};
        for (int i = 0; i <marks.length ; i++) { // for printing original array
            System.out.print(marks[i] +" ");
        }
        System.out.println();
        update(marks); // calling

        for (int i = 0; i < marks.length; i++) { // for printing updated array
            System.out.print(marks[i] +" ");
        }
        System.out.println();
    }
}
