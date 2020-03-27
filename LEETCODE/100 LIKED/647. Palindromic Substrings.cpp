#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string str)
{
    int i = 0, j = str.length() - 1;
    if (str.length() < 2)
        return true;
    while (i < j)
        if (str[i++] != str[j--])
            return false;
    return true;
}
int countSubstrings(string s)
{
    int n = s.length(), ans = n;
    if (n == 1)
        return n;
    else if (n == 2)
    {
        if (s[0] == s[1])
            return 3;
        return 2;
    }
    else
        for (int len = 2; len < n; len++)
            for (int i = 0; i <= n - len; i++)
                if (is_palindrome(s.substr(i, len)))
                    ans += 1;
    return ans;
}

int main()
{
    string s = "aaa";
    cout << countSubstrings(s) << endl;
    return 0;
}