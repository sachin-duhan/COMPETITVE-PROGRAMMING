#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        if (s == t)
            return 0;
        map<char, int> m;
        for (char c : s)
            m[c]++;
        int ans = 0;
        for (char c : t)
            if (m.find(c) != m.end() && m[c] > 0)
                m[c]--;
            else
                ans++;
        return ans;
    }
};