#include <stdio.h>

// Define the structure for Student
struct Student {
    int rollNumber;
    char name[50];
    int marks[3];
};

// Function to take student details
void takeStudentDetails(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollNumber);
    printf("Enter Name: ");
    scanf("%s", s->name);
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &s->marks[i]);
    }
}

// Function to display student details
void displayStudentDetails(struct Student s) {
    printf("\nRoll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    for (int i = 0; i < 3; i++) {
        printf("Marks for Subject %d: %d\n", i + 1, s.marks[i]);
    }
}

// Function to calculate average marks
float calculateAverageMarks(struct Student s) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += s.marks[i];
    }
    return sum / 3.0;
}

int main() {
    int n = 5; // Number of students
    struct Student students[n];

    // Take details for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student #%d:\n", i + 1);
        takeStudentDetails(&students[i]);
    }

    // Display details and average marks for each student
    for (int i = 0; i < n; i++) {
        displayStudentDetails(students[i]);
        printf("Average Marks: %.2f\n", calculateAverageMarks(students[i]));
    }

    return 0;
}
