#include <bits/stdc++.h>
using namespace std;

void helper(string str, int i, string ans)
{
    if (i >= str.length())
    {
        if (ans.length() == 3)
            cout << ans << endl;
        return;
    }
    helper(str, i + 1, ans);
    helper(str, i + 1, ans + str[i]);
}

void solve(string str)
{
    map<char, int> m;
    for (auto c : str)
        m[c]++;
    string uniq = "";
    for (auto a : m)
        uniq += a.first;
    helper(uniq, 0, "");
}

int main()
{
    solve("sachinduhanduhab");
    return 0;
}
