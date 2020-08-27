#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    vector<bool> chars(26, false);
    int i = 0, j = 0, ans = 0;
    while (j < s.length())
    {
        if (chars[s[j] - 'a'])
        {
            int k = i;
            while (s[k] != s[j])
            {
                chars[k]=false;
                k++;
            }
            i = k + 1;
        }
        else
            chars[s[j++] - 'a'] = true;
    }
    return ans;
}

/*
abababab
*/

int main()
{
    string s = "cabcdea";
    cout << '0' - '0' << endl;
    return 0;
}