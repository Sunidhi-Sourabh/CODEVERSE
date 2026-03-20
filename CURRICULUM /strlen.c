/*
========================================
Problem: Length of a String
Source: Curriculum Practice
Type: String Processing / Built-in Function
========================================

Problem Statement:
Write a C program to find the length of a string entered by the user.

The program should read a full string (including spaces) and print the
number of characters present in the string.

Approach:
1. Declare a character array to store the string.
2. Take input using scanf("%[^\n]") so spaces are included.
3. Use the built-in function strlen() from string.h.
4. Store the returned length in a variable.
5. Print the length.

Code:
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int length = strlen(str);

    printf("Length of the string = %d\n", length);

    return 0;
}

/*
Time Complexity: O(n)

strlen() traverses the string until it finds the null terminator '\0'.
If the string length is n, it checks n characters.

Space Complexity: O(n)

The character array stores the input string.

Key Insight:
Strings in C are stored as character arrays and always end with
a special null character '\0'. The strlen() function counts the
number of characters before this null terminator.
*/
