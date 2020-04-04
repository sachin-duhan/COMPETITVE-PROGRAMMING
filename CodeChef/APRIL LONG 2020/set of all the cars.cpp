#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    vector<int> price(t);
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        if (temp > 0)
            q.push(temp);
    }
    int i = 0;
    long long ans = 0;
    while (!q.empty())
    {
        ans += q.top() - i > 0 ? q.top() - i : 0;
        i++;
        q.pop();
    }

    cout << ans % 1000000007 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}