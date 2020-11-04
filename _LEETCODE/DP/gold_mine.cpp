
#include <bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>> &mines, int i, vector<vector<int>> &dp)
{
    int m = mines.size(), n = (m == 0) ? 0 : mines[0].size();
    int row = i, temp = i;
    for (int col = n - 1; col > 0; col--)
    {
        if (row == 0)
        {
            if (mines[row][col - 1] > mines[row + 1][col - 1])
            {
                // max is to left
                dp[row][col - 1] = max(dp[row][col], mines[row][col] + mines[row][col - 1]);
                temp = row;
            }
            else
            {
                // max is at down
                dp[row + 1][col - 1] = max(dp[row][col], mines[row][col] + mines[row + 1][col - 1]);
                temp = row + 1;
            }
        }
        else if (row == m - 1)
        {

            if (mines[row][col - 1] > mines[row - 1][col - 1])
            {
                // max is to left
                dp[row][col - 1] = max(dp[row][col], mines[row][col] + mines[row][col - 1]);
                temp = row;
            }
            else
            { // max is at above
                dp[row - 1][col - 1] = max(dp[row][col], mines[row][col] + mines[row - 1][col - 1]);
                temp = row - 1;
            }
        }
        else
        {
            if (mines[row + 1][col - 1] > mines[row - 1][col - 1])
            {
                if (mines[row][col - 1] > mines[row + 1][col - 1])
                {
                    // max is to left
                    dp[row][col - 1] = max(dp[row][col], mines[row][col] + mines[row][col - 1]);
                    temp = row;
                }
                else
                { // max is at down
                    dp[row + 1][col - 1] = max(dp[row][col], mines[row][col] + mines[row][col - 1]);
                    temp = row + 1;
                }
            }
            else
            {
                if (mines[row][col - 1] > mines[row - 1][col - 1])
                {
                    // max is to left
                    dp[row][col - 1] = max(dp[row][col], mines[row][col] + mines[row][col - 1]);
                    temp = row;
                }
                else
                { // max is at above
                    dp[row - 1][col - 1] = max(dp[row][col], mines[row][col] + mines[row][col - 1]);
                    temp = row - 1;
                }
            }
        }
    }
    temp = row;
}

int solve(vector<vector<int>> mine)
{
    int m = mine.size(), n = (m == 0) ? 0 : mine[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    for (int i = m - 1; i >= 0; i--)
        dp[i][n - 1] = mine[i][n - 1];
    for (int i = 0; i < m; i++)
        helper(mine, i, dp);

    int ans = 0;
    for (int i = 0; i < m; i++)
        ans = max(ans, dp[i][0]);
    return ans;
}

int main()
{
    return 0;
}
