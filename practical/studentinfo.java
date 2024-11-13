import java.util.*;
interface Studentinfo {
    String getStudentDetails();
    double getMarks();
}

class Student implements Studentinfo{
    private String name;
    private int rollNumber;
    private double marks;

    public Student(String name, int rollNumber, double marks){
        this.name = name;
        this.rollNumber = rollNumber;
        this.marks = marks;
    }

    public String getStudentDetails(){
        return "Name : " + name+ " Roll Number : " + rollNumber;
    }
    public double getMarks(){
        return marks;
    }
}

public class studentinfo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the name of the student: ");
        String name = sc.nextLine();

        System.out.print("ENter Roll Number : ");
        int rollNumber = sc.nextInt();

        System.out.print("Enter the marks of the student: ");
        int marks = sc.nextInt();

        Student st = new Student(name, rollNumber, marks);
        System.out.println("Student Information: ");
        System.out.println(st.getStudentDetails());
        System.out.printf("Marks: %.2f\n", st.getMarks());

        sc.close();
    }
}
