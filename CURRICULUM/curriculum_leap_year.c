/*
========================================
Problem: Leap Year Check
Source: Curriculum Practice
Type: Mathematical Condition / Calendar Logic
========================================

Problem Statement:
Write a C program to check whether a given year entered by the user 
is a leap year or not.

Leap Year Rule:
1. If a year is divisible by 4 → it may be a leap year.
2. But if it is divisible by 100 → it is NOT a leap year.
3. Unless it is also divisible by 400 → then it IS a leap year.

Examples:
2000 → Leap year
1900 → Not leap year
2028 → Leap year

Approach:
1. Take a year as input from the user.
2. Apply the leap year conditions using modulo (%).
3. Check the complete rule using logical operators.
4. Print whether the year is leap or not.

Code:
*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

/*
Time Complexity: O(1)
Only constant arithmetic checks are performed.

Space Complexity: O(1)
Only one variable is used.

Key Insight:
Leap year detection requires combining multiple mathematical conditions
using logical AND (&&) and OR (||) operators.
*/
