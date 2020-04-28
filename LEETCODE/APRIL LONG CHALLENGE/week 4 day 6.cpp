#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<char>> mat)
{
    int m = mat.size(), n = m > 0 ? mat[0].size() : 0;
    int ans = 0;
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (mat[i - 1][j - 1] == '1')
            {
                dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1])) + 1;
                ans = max(ans, dp[i][j]);
            }
        }
    return ans;
}

int main()
{
    vector<vector<char>> input;
    return 0;
}