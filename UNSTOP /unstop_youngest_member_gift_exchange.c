/*
Problem: Youngest Member Gift Exchange
Platform: Unstop
Difficulty: Easy–Medium
Date: 20-03-2026

Problem Type / Pattern:
Graph Problem
Sink Node Detection
Indegree–Outdegree Analysis

Concepts Used:
Graph Modeling
Counting Technique
Indegree and Outdegree

Problem Statement:
In a royal family, gifts are exchanged. The youngest member receives
gifts from everyone else but does not give any gifts.

Input:
n → number of members
m → number of gift exchanges
ai bi → ai gave a gift to bi

Output:
Return the youngest member or -1 if no such member exists.

Approach:
1. Track how many gifts each member gives.
2. Track how many gifts each member receives.
3. The youngest member must satisfy:
   given[i] == 0
   received[i] == n-1
4. Iterate through all members to find such a person.

Complexity:
Time: O(n + m)
Space: O(n)

Key Learning:
- Modeling relationships as directed graphs
- Identifying sink nodes in graphs

Improvement Notes:
- Only counts are needed, not full relationship lists.
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int given[n+1];
    int received[n+1];

    for (int i = 1; i <= n; i++) {
        given[i] = 0;
        received[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        given[a]++;
        received[b]++;
    }

    int youngest = -1;

    for (int i = 1; i <= n; i++) {
        if (given[i] == 0 && received[i] == n - 1) {
            youngest = i;
            break;
        }
    }

    printf("%d\n", youngest);
    return 0;
}
