#include <iostream>
#include <vector>
using namespace std;

char solve(string s, string t)
{
    int s1 = 0, s2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s1 += s[i];
        s2 += t[i];
    }
    s2 += t[t.length() - 1];
    return char(s2 - s1);
}

int main()
{
    string s = "abcd";
    string t = "abcde";
    cout << solve(s, t) << endl;
    return 0;
}