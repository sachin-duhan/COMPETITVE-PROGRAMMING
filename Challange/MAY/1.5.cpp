#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char, int> m;
        for (int i = 0; i < s.length(); i++)
        {
            auto itr = m.find(s[i]);
            if (itr != m.end())
                itr->second = -1;
            else
                m.insert(make_pair(s[i], i));
        }
        int index = INT_MAX;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if (itr->second != -1)
                index = min(itr->second, index);
        }
        return index == INT_MAX ? -1 : index;
    }
};
