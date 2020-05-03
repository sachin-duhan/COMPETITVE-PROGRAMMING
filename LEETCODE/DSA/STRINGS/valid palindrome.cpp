#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), [](auto &c) {
        c = tolower(c);
        if (int(c) < 97 || int(c) > 122)
            c -= c;
        return c;
    });
    int start = 0, end = s.length() - 1;
    while (start <= end)
        if (s[start++] != s[end--])
            return false;
    return true;
}

bool isPalindrome1(string s)
{

    if (s.empty() or s.size() == 1)
        return true;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if (s[start] < '0' || s[start] > '9' && s[start] < 'a' || s[start] > 'z')
            start++;
        else if (s[end] < '0' || s[end] > '9' && s[end] < 'a' || s[end] > 'z')
            end--;

        else if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "a.";
    cout << isPalindrome(s) << endl;
    return 0;
}