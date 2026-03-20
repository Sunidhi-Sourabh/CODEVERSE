/*
========================================
Problem: Character Frequency in a String
Source: Curriculum Practice
Type: String Processing / Frequency Counting
========================================

Problem Statement:
Write a C program to count the frequency of each character
in a string entered by the user.

The program should read a full string (including spaces)
and display how many times each character appears.

Approach:
1. Declare a character array to store the input string.
2. Create an integer array of size 256 to store character frequencies
   (covers the full ASCII character set).
3. Initialize all frequency values to 0.
4. Traverse the string character by character.
5. Use the ASCII value of each character as an index in the freq array.
6. Increment the corresponding frequency counter.
7. Finally, print only those characters whose frequency is greater than 0.

Code:
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\n--- Character Frequencies ---\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}

/*
Time Complexity: O(n)

Where n is the length of the string.
The program traverses the string once to count frequencies.

Space Complexity: O(1)

The frequency array size (256) is constant and independent of input size.

Key Insight:
Characters in C are internally represented by ASCII values.
These values can be used directly as array indices to efficiently
count occurrences of characters.
*/
