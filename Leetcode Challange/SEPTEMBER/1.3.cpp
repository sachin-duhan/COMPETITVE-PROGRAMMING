#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();
        int len = 1;
        while (len < n / 2)
        {
            bool flag = true;
            string match = s.substr(0, len);
            cout << match << " ";
            for (int j = len; j < n; j += len)
            {
                string curr = s.substr(j, len);
                cout << curr << " ";
                if (curr != match)
                    flag = false;
                if (!flag)
                    break;
            }
            cout << endl;
            if (flag)
                return true;
            len++;
        }
        return false;
    }
};

int main()
{
    string input = "babbabbabbabbab";
    Solution solve;
    cout << (solve.repeatedSubstringPattern(input) == true ? "TRUE" : "FALSE") << endl;
    return 0;
}

// another solution
class Solution
{
public:
    bool repeatedSubstringPattern(string str)
    {
        int i = 1, j = 0, n = str.size();
        vector<int> dp(n + 1, 0);
        while (i < n)
        {
            if (str[i] == str[j])
                dp[++i] = ++j;
            else if (j == 0)
                i++;
            else
                j = dp[j];
        }
        return dp[n] && dp[n] % (n - dp[n]) == 0;
    }
};