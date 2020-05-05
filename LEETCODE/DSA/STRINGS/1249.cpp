#include <bits/stdc++.h>
using namespace std;

string minRemoveToMakeValid(string s)
{
    string ans = "";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[j] == ')')
                {
                    ans += '(';
                    count++;
                    break;
                }
            }
        } else if (s[i] = ')' && count > 0)
        {
            count--;
            ans += ')';
        } else
            ans += s[i];
    }
    return ans;
}

int main()
{
    string s = "leetcode(don(e)";
    cout << minRemoveToMakeValid(s) << endl;
    return 0;
}