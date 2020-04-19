#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minAddToMakeValid(string S)
    {
        int ans = 0, curr = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (curr <= 0 && S[i] == ')')
                ans++;
            else if (S[i] == '(')
                curr++;
            else
                curr--;
        }
        return abs(ans) + abs(curr);
    }
};