#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int last = 0;
        for (int i = 0; i < s.size(); i++)
        {
            bool found = false;
            for (int j = last; j < t.size(); j++)
            {
                if (s[i] == t[j])
                {
                    last = j + 1;
                    found = true;
                    break;
                }
            }
            if (!found)
                return false;
        }
        return true;
    }
};