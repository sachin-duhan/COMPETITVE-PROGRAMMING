#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxUncrossedLines(vector<int> &A, vector<int> &B)
    {
        int m = A.size(), n = m == 0 ? 0 : B.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (A[i - 1] == B[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[m][n];
    }
};