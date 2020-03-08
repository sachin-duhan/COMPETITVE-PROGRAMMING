#include <bits/stdc++.h>
#define loop(i, a, n) for (auto i = a; i < n; i++)
using namespace std;

int input(){int b; cin >> b; return b;}

void solve()
{
    int n = input();
    vector<int> val(n, 0);
    loop(i, 0, n) val[i] = input();
    int ans = 0;
    loop(i, 0, n)
        loop(j, 0, n) if (val[i] * val[j] == val[i] + val[j]) ans++;
    cout << ans << endl;
}

int main()
{
    int t = input();
    while (t--)
        solve();
    return 0;
}