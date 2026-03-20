/*
========================================
Problem: Size of Data Types
Source: Curriculum Practice
Type: Memory Concepts / sizeof Operator
========================================

Problem Statement:
Write a C program to find and print the size (in bytes) of
different data types such as char, int, float, and double.

Approach:
1. Use the sizeof operator.
2. Apply sizeof to different data types.
3. Print the result using printf.

Code:
*/

#include <stdio.h>

int main() {

    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));

    return 0;
}

/*
Time Complexity: O(1)

sizeof is evaluated at compile time.

Space Complexity: O(1)

No additional memory structures are used.

Key Insight:
The sizeof operator returns the number of bytes required
to store a particular data type in memory.
*/
