/*
========================================
Problem: Sum of First 10 Natural Numbers
Source: Curriculum Practice
Type: Loop / Iterative Accumulation
========================================

Problem Statement:
Write a C program to calculate the sum of the first 10 natural numbers.

Natural Numbers:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10

Expected Sum:
55

Approach:
1. Initialize a variable 'sum' to store the total.
2. Use a for loop starting from 1 up to 10.
3. Add each number to the sum using the += operator.
4. After the loop ends, print the final result.

Code:
*/

#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    // Loop through first 10 natural numbers
    for (i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("The sum of the first 10 natural numbers is: %d\n", sum);

    return 0;
}

/*
Time Complexity: O(n)

Where n = number of natural numbers summed.
In this program n = 10, so it performs 10 iterations.

Space Complexity: O(1)

Only two integer variables are used.

Key Insight:
The += operator is used for accumulation.
This pattern (sum += value inside a loop) is a very common technique
in programming for computing totals, averages, and aggregations.
*/
