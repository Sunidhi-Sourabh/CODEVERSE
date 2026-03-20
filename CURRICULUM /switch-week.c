/*
========================================
Problem: Weekday using Switch Case
Source: Curriculum Practice
Type: Control Flow / Switch Statement
========================================

Problem Statement:
Write a C program that takes an integer input (1–7) and prints the
corresponding weekday using a switch statement.

Mapping:
1 → Monday
2 → Tuesday
3 → Wednesday
4 → Thursday
5 → Friday
6 → Saturday
7 → Sunday

If the number is outside 1–7, print "Invalid day number".

Approach:
1. Take an integer input representing the day.
2. Use a switch statement to match the number.
3. Each case prints the corresponding weekday.
4. Use break after every case to stop fall-through.
5. Use default to handle invalid inputs.

Code:
*/

#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}

/*
Time Complexity: O(1)

The switch directly jumps to the matching case.

Space Complexity: O(1)

Only one integer variable is used.

Key Insight:
The switch statement provides a cleaner alternative to multiple
if-else conditions when comparing a single variable against
multiple constant values.
*/
