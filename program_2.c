/*
    Write a program to accept marks of five courses and if student is pass then find the grade
    obtained by student. If student scores aggregate greater than 75%, then the grade is
    distinction. If aggregate is 60>and <75 then the grade is first division. If aggregate is >=50
    and <60 then the grade is second division. If aggregate is >=40 and <50 then the grade is
    third division.
*/

#include <stdio.h>

int main() {
    float marks[5]; // Array to store marks for 5 courses
    float total = 0; // Variable to store the total marks
    float aggregate; // Variable to store the aggregate percentage
    int failed_subject = 0; // Flag to track if any subject has marks less than 40

    // Input marks for 5 courses
    printf("Enter marks for 5 courses (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];

        // Check if any subject has marks less than 40
        if (marks[i] < 40) {
            failed_subject = 1;
        }
    }

    // Calculate aggregate percentage
    aggregate = (total / 500) * 100;

    // Determine grade based on aggregate percentage and failed subject
    printf("Aggregate Percentage: %.2f%%\n", aggregate);
    if (failed_subject) {
        printf("Grade: Fail (Due to marks less than 40 in at least one subject)\n");
    } else if (aggregate >= 75) {
        printf("Grade: Distinction\n");
    } else if (aggregate >= 60 && aggregate < 75) {
        printf("Grade: First Division\n");
    } else if (aggregate >= 50 && aggregate < 60) {
        printf("Grade: Second Division\n");
    } else if (aggregate >= 40 && aggregate < 50) {
        printf("Grade: Third Division\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}