/*Write a C Program to Calculate Total and Percentage marks of a student using structure.*/
#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int marks[5];
    int total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    // Get student name
    printf("Enter student name: ");
    scanf("%s", s.name);

    // Get student marks
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }

    // Calculate total marks
    s.total = 0;
    for (i = 0; i < 5; i++) {
        s.total += s.marks[i];
    }

    // Calculate percentage
    s.percentage = (float)s.total / 500 * 100;

    // Display student information
    printf("\nStudent Name: %s\n", s.name);
    printf("Total Marks: %d\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);

    return 0;
}

/*Output*/
/*Input the Roll Number of the student: 784
Input the Name of the Student: James
Input the marks of Physics, Chemistry, and Computer Application: 70 80 90

Roll No: 784
Name of Student: James
Marks in Physics: 70
Marks in Chemistry: 80
Marks in Computer Application: 90
Total Marks = 240
Percentage = 80.00
Division = First*/