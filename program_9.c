/*
A class teacher wants to keep record of 10 students in the class along with the names and
marks
obtained in 5 subjects. Write a C program with structure that displays :
a) Overall percentage result of the class
b) Total number of passing students in the class,
c) Total number of students failing in one subject
d) Total number of distinctions in the class.
*/

#include <stdio.h>
#include <string.h>

const int NUM_STUDENTS = 10;
const int NUM_SUBJECTS = 5;
const int PASSING_MARKS = 40;
const float DISTINCTION_PERCENTAGE = 75.0;

struct Student {
    char name[50];
    int marks[5];
    int total_marks;
    float percentage;
};

int main() {
    struct Student students[NUM_STUDENTS];
    int i, j, passing_students = 0, failing_one_subject = 0, distinctions = 0;
    float class_percentage = 0.0;

    // Input student data
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        students[i].total_marks = 0;

        for (j = 0; j < NUM_SUBJECTS; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total_marks += students[i].marks[j];
        }

        students[i].percentage = (float)students[i].total_marks / (NUM_SUBJECTS * 100) * 100;
        class_percentage += students[i].percentage;
    }

    class_percentage /= NUM_STUDENTS;

    // Calculate passing students, failing one subject, and distinctions
    for (i = 0; i < NUM_STUDENTS; i++) {
        int failed_subjects = 0;
        for (j = 0; j < NUM_SUBJECTS; j++) {
            if (students[i].marks[j] < PASSING_MARKS) {
                failed_subjects++;
            }
        }

        if (failed_subjects == 0) {
            passing_students++;
            if (students[i].percentage >= DISTINCTION_PERCENTAGE) {
                distinctions++;
            }
        } else if (failed_subjects == 1) {
            failing_one_subject++;
        }
    }

    // Display results
    printf("\nOverall percentage result of the class: %.2f%%\n", class_percentage);
    printf("Total number of passing students in the class: %d\n", passing_students);
    printf("Total number of students failing in one subject: %d\n", failing_one_subject);
    printf("Total number of distinctions in the class: %d\n", distinctions);

    return 0;
}