/*
========================================
Problem: Vowel or Consonant
Source: Curriculum Practice
Type: Character Classification / Conditional Logic
========================================

Problem Statement:
Write a C program to check whether a character entered by the user
is a vowel or a consonant. If the character is not an alphabet,
display an appropriate message.

Approach 1: Using if–else conditions
1. Take a character input.
2. Compare the character with vowel characters.
3. If it matches → print vowel.
4. Otherwise print consonant.

Code (Method 1):
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
----------------------------------------
Approach 2: Using switch statement
----------------------------------------
1. Take a character input.
2. Use switch to match vowel cases.
3. If matched → vowel.
4. Otherwise check whether the character is alphabet.
5. If alphabet → consonant.
6. Otherwise → not an alphabet.

Code (Method 2):
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("%c is a vowel.\n", ch);
            break;

        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not an alphabet.\n", ch);
            }
    }

    return 0;
}

/*
Time Complexity: O(1)
A fixed number of comparisons are performed.

Space Complexity: O(1)
Only one character variable is used.

Key Insight:
A single problem can be solved using different control-flow
structures such as if–else chains or switch statements.
The switch version also demonstrates input validation
by checking if the character is an alphabet.
*/
