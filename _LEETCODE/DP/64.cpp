
#include <bits/stdc++.h>
using namespace std;

int max_path(vector<vector<int>> cost)
{
    int m = cost.size(), n = m == 0 ? 0 : cost[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    for (int j = n - 2; j >= 0; j--)
        dp[m - 1][j] += dp[m - 1][j + 1];

    for (int j = n - 2; j >= 0; j--)
        dp[j][n - 1] += dp[j + 1][n - 1];

    for (int i = m - 2; i >= 0; i--)
        for (int j = n - 2; j >= 0; j--)
            dp[i][j] += min(dp[i][j + 1], min(dp[i + 1][j], dp[i + 1][j + 1]));

    return dp[0][0];
}

int main()
{

    return 0;
}
