/*
Problem: Find the Town Judge
Platform: LeetCode
Difficulty: Easy
Date: 20-03-2026

Problem Type / Pattern:
Graph Problem
Sink Node Detection
Indegree–Outdegree Optimization

Concepts Used:
Graph Relationships
Score Based Counting
Indegree / Outdegree

Problem Statement:
In a town with n people labeled 1 to n, one person might be the judge.

Judge rules:
1. The judge trusts nobody.
2. Everybody else trusts the judge.
3. Only one person can satisfy these rules.

Input:
trust[i] = [a, b] meaning a trusts b.

Output:
Return the judge label, or -1 if no judge exists.

Approach:
Use a score array.

Rule:
If person a trusts someone → score[a]--
If person b is trusted → score[b]++

The judge must have score = n - 1.

Complexity:
Time: O(n + trustSize)
Space: O(n)

Key Learning:
- Indegree/outdegree tracking using a single array
- Graph sink node detection

Improvement Notes:
- Using one array simplifies memory usage compared to separate arrays.
*/

int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    int score[n+1];

    for (int i = 1; i <= n; i++) {
        score[i] = 0;
    }

    for (int i = 0; i < trustSize; i++) {
        int a = trust[i][0];
        int b = trust[i][1];

        score[a]--;
        score[b]++;
    }

    for (int i = 1; i <= n; i++) {
        if (score[i] == n - 1) {
            return i;
        }
    }

    return -1;
}
