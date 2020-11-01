#include <bits/stdc++.h>
using namespace std;

#define ans_len 3
void helper(string str, int i, string ans)
{
    if (i >= str.length())
    {
        if (ans.length() == ans_len)
            cout << ans << endl;
        return;
    }
    helper(str, i + 1, ans + str[i]);
    helper(str, i + 1, ans);
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
