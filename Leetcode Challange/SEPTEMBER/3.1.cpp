#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.length() - 1, ans = 0;
        bool word = false;
        if (n < 0)
            return 0;
        while (n >= 0)
        {
            char c = s[n--];
            if (c != ' ')
                word = true;
            if (word)
                ans++;
            if (c == ' ' && word)
                return ans - 1;
        }
        return ans;
    }
};