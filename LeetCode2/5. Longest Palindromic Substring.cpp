#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
        if (s[start++] != s[end--])
            return false;
    return true;
}
string longestPalindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        
    }
    return "fuck off!";
}

int main()
{
    string s = "basadm";
    return 0;
}