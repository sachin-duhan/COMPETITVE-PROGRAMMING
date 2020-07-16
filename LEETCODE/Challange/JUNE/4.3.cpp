#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    map<int, int> m;
    void solve(int n)
    {
        int sol = 0;
        for (int i = 1; i <= n; i++)
        {
            sol += (m[i - 1] * m[n - i]);
        }
        m[n] = sol;
    }
    int numTrees(int n)
    {

        m[0] = 1, m[1] = 1, m[2] = 2, m[3] = 5;

        if (n == 0 || n == 1 || n == 2 || n == 3)
            return m[n];
        for (int i = 4; i <= n; i++)
        {
            solve(i);
        }
        return m[n];
    }
};