#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int dp[m];
        dp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (i == 0)
                    dp[j] = 1;
                else
                    dp[j] = dp[j - 1] + dp[j];
            }
        }
        return dp[m - 1];
    }
};

int main()
{
    Solution solution;
    cout << solution.uniquePaths(4, 3) << endl;
    return 0;
}