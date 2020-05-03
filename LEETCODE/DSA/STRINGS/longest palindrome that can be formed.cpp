#include <bits/stdc++.h>
using namespace std;
int size_of_largest_palindrome(string s)
{
    int ans = 0;
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    bool isOne = false;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if (itr->second % 2 == 0)
            ans += itr->second;
        if (!isOne && itr->second % 2 != 0)
        {
            ans += 1;
            isOne = true;
        }
    }
    return ans;
}
int main()
{
    string s = "bbbab";
    cout << size_of_largest_palindrome(s) << endl;
    return 0;
}