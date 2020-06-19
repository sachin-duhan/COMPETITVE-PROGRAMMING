#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestDupSubstring(string S)
    {
        map<string, int> m;
        int _len = S.length();
        for (int i = 0; i < _len; i++)
        {
            string temp = "";
            for (int j = i; j < _len; j++)
            {
                temp += S[j];
                m[temp]++;
            }
        }
        pair<string, int> ans = {"", INT_MIN};
        for (auto itr : m)
            if (itr.second >= ans.second)
                ans = {itr.first, itr.second};
        return ans.first;
    }
};

int main(){

}