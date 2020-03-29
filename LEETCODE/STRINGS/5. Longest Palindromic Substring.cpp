#include <bits/stdc++.h>
using namespace std;

int splitFromMiddle(string s, int start, int end)
{
    while (start >= 0 && start < s.length() && s[start] == s[end])
    {
        start++;
        end--;
    }
    return end - start + 1;
}

string longestPalindrome(string s)
{
    string ans = "";
    int max_len = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int len1 = splitFromMiddle(s, i, i);
        int len2 = splitFromMiddle(s, i, i + 1);
        int m = max(len1, len2);
        if (m > max_len)
            ans += s.substr(i - m, m);
    }
    return ans;
}

int main()
{
    string s = "ababd";
    cout << longestPalindrome(s) << endl;
    return 0;
}