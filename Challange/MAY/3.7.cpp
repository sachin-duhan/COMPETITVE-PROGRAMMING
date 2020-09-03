#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>> &matrix)
{
    int ans = 0;
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (matrix[i][j] == 1)
                ans += dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1])) + 1;
    return ans;
}

int main()
{
    vector<vector<int>> matrix{{0, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}};
    cout << countSquares(matrix) << endl;
    return 0;
}