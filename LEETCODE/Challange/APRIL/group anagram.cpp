#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> mp;
    int len = strs.size();
    for (int i = 0; i < len; i++)
    {
        string s = strs[i]; // this s is the key against which the value will be instered in the map!
        sort(s.begin(), s.end());
        mp[s].push_back(strs[i]);
    }

    vector<vector<string>> res;
    for (auto x : mp)
    {
        vector<string> temp(x.second.begin(), x.second.end());
        res.push_back(temp);
    }
    return res;
}

int main()
{
    // code was solved into the leetcode online IDE!!
    return 0;
}