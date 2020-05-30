#include<bits/stdc++.h>
using namespace std;
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

int main()
{
    string s = "aa";
    cout << firstUniqChar(s) << endl;
    return 0;
}

/*
Given a string, find the first non-repeating character in it and return it's index. 
If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/