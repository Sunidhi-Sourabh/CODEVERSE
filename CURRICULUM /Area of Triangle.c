/*
========================================
Problem: Area of Triangle
Source: Curriculum Practice
Type: Mathematical Formula / User Input
========================================

Problem Statement:
Write a C program to calculate the area of a triangle using the base 
and height entered by the user.

Formula:
Area = (1/2) × base × height

Approach:
1. Take base and height as floating point inputs.
2. Apply the triangle area formula.
3. Store the result in a variable.
4. Print the calculated area.

Code:
*/

#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area of triangle = %f\n", area);

    return 0;
}

/*
Time Complexity: O(1)
Only a single arithmetic calculation is performed.

Space Complexity: O(1)
Only a few float variables are used.

Key Insight:
Mathematical formulas in programming are implemented using basic 
arithmetic operators (*, /). Floating point variables are used when 
decimal values are expected.
*/
