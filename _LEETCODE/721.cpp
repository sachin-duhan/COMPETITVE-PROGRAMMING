#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isPresent(vector<string> account, map<string, set<string>> myMap)
    {
        string key = account[0];
        if (myMap.find(key) != myMap.end())
        {
            auto emails = myMap[key];
            map<string, int> m;
            for (auto email : emails)
                m[email]++;
            for (auto email : account)
                if (m.find(email) != m.end())
                    return true;
        }
        return false;
    }

public:
    vector<vector<string>> accountsMerge(vector<vector<string>> accounts)
    {
        map<string, set<string>> m;
        for (auto account : accounts)
        {
            set<string> temp;
            pair<string,set<string>> mp(account[0],temp));
            if (!isPresent(account, mp))
            {
                string key = account[0];
                for (int i = 1; i < account.size(); i++)
                    m[key].insert(account[i]);
            }
            else
            {
                for (int i = 1; i < account.size(); i++)
                    temp.insert(account[i]);
            }
            mp.second = temp;
            m.insert(mp));
        }

        vector<vector<string>> ans;
        for (auto a : m)
        {
            ans.push_back(a.first);
            for (auto email : a.second)
                ans.push_back(email);
        }
        return ans;
    }
};

int main()
{
    return 0;
}