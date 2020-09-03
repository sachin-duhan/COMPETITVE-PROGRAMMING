#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int ans = 0;
    void helper(int n)
    {
        if (n == 0 || n == 1)
            return;
        int a = sqrt(n);
        n -= a * a;
        ans++;
        helper(n);
    }

public:
    int numSquares(int n)
    {
        helper(n);
        return ans;
    }
};

class Solution
{
public:
    int numSquares(int n)
    {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int sq = 1; sq <= n; sq++)
        {
            for (int i = 1; i * i <= sq; i++)
            {
                dp[sq] = min(dp[sq], dp[sq - (i * i)] + 1);
            }
        }
        return dp[n];
    }
};

int main()
{
    Solution solve;
    cout << solve.numSquares(12) << endl;
    return 0;
}