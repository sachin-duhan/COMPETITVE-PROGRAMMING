#include <bits/stdc++.h>
using namespace std;

int solve(vector<pair<int,int>> adj, vector<int> ai, int a, int x)
{
    int ans = 0;
    
    return ans % 998244353;
}

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<pair<int, int>> adj(n, vector<bool>(n, false));
    for (int i = 0; i < n - 1; i++)
    {
        int row, col;
        cin >> row >> col;
        adj.push_back({row, col});
    }
    sort(adj.begin(), adj.end(), [](auto a, auto b) { return a.first == b.first ? a.second < b.second });
    vector<int> ai(n, 0);
    for (int i = 0; i < n; i++) cin >> ai[i];
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int index, val;
            cin >> index >> val;
            ai[index] = val;
        }
        else
        {
            int a;
            cin >> a;
            cout << solve(adj, ai, a, x) << endl;
        }
    }
    return 0;
}