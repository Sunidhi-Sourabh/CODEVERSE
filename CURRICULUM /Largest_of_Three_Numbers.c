/*
========================================
Problem: Largest of Three Numbers
Source: Curriculum Practice
Type: Conditional Logic / Multi-branch Decision
========================================

Problem Statement:
Write a C program to find the largest number among three integers 
entered by the user.

Approach:
1. Take three integer inputs from the user.
2. Compare the first number with the other two.
3. If num1 is greater than or equal to both → it is the largest.
4. Otherwise check if num2 is greater than or equal to both.
5. If neither of the above conditions hold, then num3 must be the largest.

Code:
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three integers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("Largest number = %d\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("Largest number = %d\n", num2);
    } 
    else {
        printf("Largest number = %d\n", num3);
    }

    return 0;
}

/*
Time Complexity: O(1)
Only a fixed number of comparisons are performed.

Space Complexity: O(1)
Only three integer variables are used.

Key Insight:
Use logical AND (&&) to ensure a number is greater than or equal to 
both other numbers before declaring it as the largest.
*/
