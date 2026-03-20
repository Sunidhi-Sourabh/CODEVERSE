/*
Problem: Youngest Member Gift Exchange
Platform: Unstop
Difficulty: Easy–Medium
Date: 20-03-2026

Problem Statement:
In a royal family, gifts are exchanged during Christmas. The youngest member
receives gifts from everyone else but does not give gifts to anyone.

Given the gift exchange data, identify the youngest member.

Input:
n → number of family members
m → number of gifts exchanged

Each of the next m lines contains:
ai bi → ai gave a gift to bi

Output:
Print the youngest member.
If no such member exists, print -1.

Approach:
1. Track how many gifts each member gives.
2. Track how many gifts each member receives.
3. The youngest member must satisfy:
   - given[i] == 0     (gives no gifts)
   - received[i] == n-1 (receives from all others)
4. Iterate through all members and check this condition.

Key Idea:
The youngest member is the one with
zero outgoing gifts and maximum incoming gifts.

Complexity:
Time: O(n + m)
Space: O(n)

Key Learning:
- Using arrays to track incoming and outgoing relationships
- Identifying special nodes in relationship data

Improvement Notes:
- We only need counts, not full gift lists.
- The logic is similar to identifying a "sink node" in graph problems.
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
