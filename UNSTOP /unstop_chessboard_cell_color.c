/*
Problem: Chessboard Cell Color
Platform: Unstop
Difficulty: Easy
Date: 20-03-2026

Problem Type / Pattern:
Math
Parity Pattern
Coordinate Mapping

Concepts Used:
ASCII Character Arithmetic
Parity (Even/Odd)
Coordinate Conversion

Problem Statement:
Given a chessboard coordinate like "a1", determine whether the cell
is Black or White. Columns are represented by letters (a–h) and rows
by numbers (1–8).

Approach:
1. Convert the column letter into a number using ASCII arithmetic.
   'a' → 1, 'b' → 2, ..., 'h' → 8
2. Convert the row character into an integer.
3. Add both coordinates.
4. If (x + y) is even → Black
5. If (x + y) is odd → White

Complexity:
Time: O(1)
Space: O(1)

Key Learning:
- Character to integer conversion using ASCII
- Recognizing parity patterns in grid problems

Improvement Notes:
- Input size is fixed (2 characters), so using char s[3] is sufficient.
*/

#include <stdio.h>

const char* determine_color(const char* s) {
    int x = s[0] - 'a' + 1;
    int y = s[1] - '0';

    if ((x + y) % 2 == 0) {
        return "Black";
    } else {
        return "White";
    }
}

int main() {
    char s[3];
    scanf("%s", s);

    const char* result = determine_color(s);
    printf("%s\n", result);

    return 0;
}
