#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(int n)
    {
        int converging_val = (1 + 2 * (n - 1) + 1) / 2;
        n /= 2;
        int ans = 0, i = 0;
        while (n--)
        {
            ans += converging_val - ((2 * i) + 1);
            i++;
        }
        return ans;
    }
};

// 1 3 5 7

// 2 3 5 6
// 3 3 5 5
// 3 4 4 5
// 4 4 4 4

// 1 3 5 7 9 11

// 5 + 3 + 1

