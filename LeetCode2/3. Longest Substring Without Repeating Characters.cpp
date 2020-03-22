#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string &s)
{
    int start = 0, end = 0, ans = 0;
    map<char, int> m;
    while (end < s.length())
    {
        auto itr = m.find(s[end]);
        if (itr == m.end())
        {
            m.insert(make_pair(s[end], 1));
            ans = max(int(m.size()), ans);
            end++;
        }
        else
        {
            m.erase(s[start]);
            start++;
        }
    }
    return ans;
}

int main()
{
    string s = "abcab";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}