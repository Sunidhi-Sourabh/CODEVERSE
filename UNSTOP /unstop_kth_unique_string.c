/*
Problem: Kth Unique String
Platform: Unstop
Difficulty: Easy–Medium
Date: 20-03-2026

Problem Type / Pattern:
Array / String Processing
Frequency Counting
Brute Force Comparison

Concepts Used:
String Comparison (strcmp)
Nested Loop Frequency Counting
Distinct Element Detection

Problem Statement:
Given N strings (some may be duplicated), find the kth distinct string.
A string is considered distinct if it appears exactly once in the list.

If the number of distinct strings is less than k, print -1.

Approach:
1. Store all N strings in an array.
2. For each string, count how many times it appears in the array.
3. If frequency == 1, it is a unique string.
4. Maintain a counter of unique strings.
5. When the counter reaches k, return that string.

Complexity:
Time: O(N² * L)
Space: O(N * L)

Where:
N = number of strings
L = maximum string length

Key Learning:
- Using strcmp() for string comparison
- Detecting unique elements using frequency counting
- Understanding brute force string matching

Improvement Notes:
- This solution checks every pair of strings, which is inefficient for large N.
- A hash map approach could reduce time complexity to O(N).
*/

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char arr[N][1005];

    for (int i = 0; i < N; i++) {
        scanf("%s", arr[i]);
    }

    int k;
    scanf("%d", &k);

    int uniqueCount = 0;
    char result[1005];
    int found = 0;

    for (int i = 0; i < N; i++) {
        int freq = 0;

        for (int j = 0; j < N; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                freq++;
            }
        }

        if (freq == 1) {
            uniqueCount++;

            if (uniqueCount == k) {
                strcpy(result, arr[i]);
                found = 1;
                break;
            }
        }
    }

    if (found) {
        printf("%s\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
