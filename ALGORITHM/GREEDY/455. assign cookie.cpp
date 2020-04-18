#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0, ans = 0;
    while (j < s.size() && i < g.size())
    {
        if (g[i] <= s[j])
        {
            j++;
            i++;
            ans++;
        }
        else
            j++;
    }
    return ans;
}

int main()
{
    vector<int> s{1, 2, 3, 4}, g{1, 2, 2};
    cout << findContentChildren(s, g) << endl;
    return 0;
}