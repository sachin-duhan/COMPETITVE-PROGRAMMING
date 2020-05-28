#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canCross(vector<int> &stones)
    {
        int N = stones.size();
        vector<vector<int>> dp(N, vector<int>(N + 1));
        dp[0][1] = true;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int diff = stones[i] - stones[j];
                if (diff < 0 || diff > N || !dp[j][diff])
                    continue;
                dp[i][diff] = true;
                if (diff - 1 >= 0)
                    dp[i][diff - 1] = true;
                if (diff + 1 <= N)
                    dp[i][diff + 1] = true;
                if (i == N - 1)
                    return true;
            }
        }
        return false;
    }
};