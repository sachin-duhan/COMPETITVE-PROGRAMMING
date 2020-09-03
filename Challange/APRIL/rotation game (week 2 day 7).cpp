#include<bits/stdc++.h>
using namespace std;

// code was written in the LEETCODE IDE!!
class Solution
{
public:
    string stringShift(string s, vector<vector<int>> &shift)
    {
        int right = 0, left = 0;
        for (auto val : shift)
            if (val[0] == 0)
                left += val[1];
            else
                right += val[1];
        if (right == left)
            return s;
        int len = s.length();
        int k = right + len - (left % len);
        k %= len;
        reverse(s.begin(), s.end());
        reverse(s.begin(), s.begin() + k);
        reverse(s.begin() + k, s.end());
        return s;
    }
};