/*
========================================
Problem: Student Result & Grade Calculation
Source: Curriculum Practice
Type: Arrays / Conditional Logic
========================================

Problem Statement:
Write a C program to calculate the percentage and grade for
5 students based on their cumulative marks (out of 1000).

Grading Criteria:
Percentage ≥ 80 → Grade A
Percentage ≥ 70 → Grade B
Percentage ≥ 60 → Grade C
Percentage ≥ 50 → Grade D
Percentage < 50 → Grade F

Approach:
1. Create an integer array to store marks of 5 students.
2. Create a float array to store their percentages.
3. Take marks input for each student using a loop.
4. Convert marks into percentage using:
   percentage = (marks / total_marks) * 100
5. Use an if–else ladder to assign grades.
6. Print each student's percentage and grade.

Code:
*/

#include <stdio.h>

int main() {
    int marks[5];
    float percentage[5];
    int total_marks = 1000;

    for (int i = 0; i < 5; i++) {
        printf("Enter total marks obtained by Student %d (out of 1000): ", i+1);
        scanf("%d", &marks[i]);

        percentage[i] = (marks[i] / (float)total_marks) * 100;
    }

    printf("\n--- Results ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d: Percentage = %.2f%%, Grade = ", i+1, percentage[i]);

        if (percentage[i] >= 80) {
            printf("A\n");
        }
        else if (percentage[i] >= 70) {
            printf("B\n");
        }
        else if (percentage[i] >= 60) {
            printf("C\n");
        }
        else if (percentage[i] >= 50) {
            printf("D\n");
        }
        else {
            printf("F\n");
        }
    }

    return 0;
}

/*
Time Complexity: O(n)

Where n = number of students.
The program loops through the student list twice.

Space Complexity: O(n)

Two arrays are used to store marks and percentages.

Key Insight:
Arrays allow processing multiple students efficiently.
Conditional ladders are used to classify numerical ranges
into categories such as grades.
*/
