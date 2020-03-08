#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define vr vector
#define mp make_pair
#define pb push_back
#define ll long long
#define desc greater<int>()
#define lend cout << endl;
#define L length()
#define vs size()

void solve()
{
    int N, M;
    cin >> N >> M;
    int X, Y, S;
    cin >> X >> Y >> S;
    int x[X + 2], y[Y + 2];
    x[0] = 0;
    y[0] = 0;
    x[X + 1] = N + 1;
    y[Y + 1] = M + 1;
    int p = 0, q = 0;
    fo(i, 1, X)
    {
        cin >> x[i];
        p += ((x[i] - x[i - 1] - 1) / S);
    }
    p += ((x[X + 1] - x[X] - 1) / S);
    fo(i, 1, Y)
    {
        cin >> y[i];
        q += ((y[i] - y[i - 1] - 1) / S);
    }
    q += ((y[Y + 1] - y[Y] - 1) / S);
    cout << p * q << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
