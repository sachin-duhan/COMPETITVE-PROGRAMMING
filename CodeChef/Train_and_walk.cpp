// #pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define pb push_back
#define X first
#define Y second
#define all(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const ll mod = 1000000007;

int solve()
{
    int n, a, b, c, d, p, q, y;
    cin >> n >> a >> b >> c >> d >> p >> q >> y;
    int x[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    int ans = p * abs(x[a] - x[b]);
    if (p * abs(x[a] - x[c]) > y)
        return ans;
    ans = min(ans, y + q * abs(x[d] - x[c]) + p * abs(x[d] - x[b]));
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
}
