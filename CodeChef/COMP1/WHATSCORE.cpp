#include <bits/stdc++.h>
#define loop(i, a, n) for (auto i = a; i < n; i++)
using namespace std;

int input()
{
    int b;
    cin >> b;
    return b;
}

void solve()
{
    unordered_map<int, int> m;
    int s = input();
    while (s--)
    {
        int i = input();
        int val = input();
        if (m.find(i) != m.end())
        {
            if (m.find(i)->second < val)
                m.find(i)->second = val;
            else
                m.insert(make_pair(i, val));
        }
    }
    long long sum = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
        if (itr->first < 8)
            sum += itr->second;
    cout << sum << endl;
}

void solve1()
{
    int n = input();
    vector<int> vec(10, 0);
    long long sum = 0;
    while (n--)
    {
        int i = input();
        int val = input();
        vec[i - 1] = max(vec[i - 1], val);
    }

    for (int i = 0; i < 8; i++)
        sum += vec[i];
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}