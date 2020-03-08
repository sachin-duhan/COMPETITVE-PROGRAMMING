#include <bits/stdc++.h>
using namespace std;

bool visited[100003] = {false};
int solve(vector<int> a)
{
    int n = a.size();
    pair<int, int> p[n];
    for (auto i = 0; i < n; i++)
    {
        p[i].first = a[i];
        p[i].second = i;
    }
    sort(p, p + n);
    int answer = 0;
    for (auto i = 0; i < n; i++)
    {
        if (visited[i] || p[i].second == i)
            continue;
        int j = 0;
        int cycle = 0;
        while (!visited[j])
        {
            visited[j] = true;
            j = p[j].second;
            cycle++;
        }
        ans += (cycle - 1);
    }
}

int main()
{
    vector<int> v = {4, 2, 1, 3};
    cout << solve(v);
    return 0;
}