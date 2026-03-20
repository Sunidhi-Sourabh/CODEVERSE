/*
========================================
Problem: Vowel or Consonant
Source: Curriculum Practice
Type: Character Classification / Conditional Logic
========================================

Problem Statement:
Write a C program to check whether a character entered by the user 
is a vowel or a consonant.

Approach:
1. Take a character input.
2. Compare it with all vowel characters (a, e, i, o, u).
3. Since input may be uppercase or lowercase, check both cases.
4. If it matches any vowel → print "vowel".
5. Otherwise → print "consonant".

Code:
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}

/*
Time Complexity: O(1)
Constant comparisons.

Space Complexity: O(1)
Only one variable used.

Key Insight:
Character comparison using logical OR (||) to check multiple conditions.
*/
