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
