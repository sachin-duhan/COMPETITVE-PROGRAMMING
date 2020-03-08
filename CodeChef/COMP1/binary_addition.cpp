#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string A, B;
    cin >> A >> B;
    string result = "";
    int s = 0, ans = 0;
    int i = A.size() - 1, j = B.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        s += ((i >= 0) ? A[i] - '0' : 0);
        s += ((j >= 0) ? B[j] - '0' : 0);
        result = char(s % 2 + '0') + result;
        ans++;
        s /= 2;
        i--;
        j--;
    }
    cout << ans << andl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}