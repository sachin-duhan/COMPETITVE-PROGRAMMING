#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int ans = 0;
    string find = "";

    void subsequence(string s, int n, int index = -1, string curr = "")
    {
        if (index == n)
            return;
        if (curr == find)
            ans++;
        for (int i = index + 1; i < n; i++)
        {
            curr += s[i];
            subsequence(s, n, i, curr);
            curr = curr.erase(curr.size() - 1);
        }
    }

public:
    int numDistinct(string s, string t)
    {
        find = t;
        subsequence(s, s.length());
        return ans;
    }
};

class Solution
{
public:
    int numDistinct(string s, string t)
    {
        int n = s.size(), m = t.size();
        long long int dp[m + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
            for (int j = m; j > 0; j--)
            {
                if (s[i - 1] == t[j - 1])
                {
                    dp[j] = dp[j - 1] + dp[j];
                }
            }
        return dp[m];
    }
};