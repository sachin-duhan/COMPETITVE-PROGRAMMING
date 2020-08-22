#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int ans = 0;
    int num(char c) { return c - '0'; }
    int helper(string str, map<string, int> &m)
    {
        if (m.find(str) != m.end())
            return m[str];
        int n = str.length();

        if (n < 2)
        {
            m[str] = n;
            return n;
        }
        else if (n == 2)
        {
            m[str] = 1;
            if (num(str[0]) <= 2 && num(str[1]) <= 6)
                m[str]++;
            return m[str];
        }
        m[str] = helper(str.substr(1), m) + 1;
        return m[str];
    }

public:
    int numDecodings(string s)
    {
        map<string, int> m;
        int ans = helper(s, m);
        for (auto a : m)
            cout << a.first << " -> " << a.second << endl;
        return ans;
    }
};

int solve(string s)
{
    int n = s.length();
    vector<int> dp(n + 1, 0);
    if (s[0] != '0')
        dp[1] = 1;
    dp[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (s[i] > '0')
            dp[i] = dp[i - 1];
        else if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6'))
            dp[i] += dp[i - 2];
    }
    return dp[n];
}
int main()
{
    Solution solv;
    cout << solv.numDecodings("1221") << endl;
    cout << solve("1221") << endl;
    return 0;
}