#include <bits/stdc++.h>
using namespace std;

bool rangeCheck(char c)
{
    if ((c > 96 && c < 123) || (c > 64 && c < 91))
        return true;
    return false;
}

bool isPalindrome(string s)
{
    transform(s.begin(), s.empty(), s.begin(), ::tolower);
    int i = 0, n = s.length(), j = n - 1;
    if (n == 0)
        return true;
    while (i <= j)
    {
        if (s[i] == ' ' && rangeCheck(s[i]))
        {
            i++;
            continue;
        }
        else if (s[j] == ' ' && rangeCheck(s[i]))
        {
            j--;
            continue;
        }
        else if (s[i++] != s[j--])
            return false;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}