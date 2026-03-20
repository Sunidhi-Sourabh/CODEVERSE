/*
Problem: Chessboard Cell Color
Platform: Unstop
Difficulty: Easy
Date: 20-03-2026

Problem Statement:
Given a coordinate of a chessboard cell (like a1, b2, etc.),
determine whether the cell is Black or White.

The chessboard columns are represented by letters (a–h)
and rows by numbers (1–8).

Approach:
1. Convert the column letter to a number.
   Example: a=1, b=2, ..., h=8
2. Convert the row character to integer.
3. Add both coordinates.
4. If the sum is even → Black
5. If the sum is odd → White

Reasoning:
On a chessboard, cells with even coordinate sums are black
and odd sums are white.

Time Complexity: O(1)
Space Complexity: O(1)

Key Learning:
- Character to integer conversion in C
- ASCII arithmetic for letter indexing
- Understanding parity (even/odd) logic

Improvement Notes:
- Input size can be restricted to 2 characters instead of 256
*/

#include <stdio.h>
#include <string.h>

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
    char s[3];   // only 2 chars + null terminator needed
    scanf("%s", s);

    const char* result = determine_color(s);
    printf("%s\n", result);

    return 0;
}
