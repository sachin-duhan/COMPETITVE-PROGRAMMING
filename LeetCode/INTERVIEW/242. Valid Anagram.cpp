#include <iostream>
#include <map>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        auto itr = m.find(s[i]);
        if (itr != m.end())
            itr->second++;
        else
            m.insert(make_pair(s[i], 1));
    }

    // check for all combinations!
    for (int i = 0; i < t.length(); i++)
    {
        auto itr = m.find(t[i]);
        if (itr != m.end() && itr->second > 0)
            itr->second--;
        else
            return false;
    }
    return true;
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t) << endl;
    return 0;
}