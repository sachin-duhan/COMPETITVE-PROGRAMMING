#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> mp;
    int len = strs.size();
    for (int i = 0; i < len; i++)
    {
        string s = strs[i];
        sort(s.begin(), s.end());
        mp[s].push_back(strs[i]);
    }
    int j = 0;
    vector<vector<string>> res;
    for (auto x : mp)
    {
        vector<string> temp;
        for (auto y : x.second)
        {
            temp.push_back(y);
        }
        res.push_back(temp);
    }
    return res;
}

int main()
{
    vector<string> input({"eat", "tea", "tan", "ate", "nat", "bat"});
    vector<vector<string>> ans = groupAnagrams(input);
    for (auto arr : ans)
    {
        for (auto el : arr)
            cout << el << " ";
        cout << endl;
    }
    return 0;
}