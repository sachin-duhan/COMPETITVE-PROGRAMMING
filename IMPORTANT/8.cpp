#include <bits/stdc++.h>
using namespace std;

int minStations(vector<int> arrival, vector<int> dept)
{
    assert(arrival.size() == dept.size());
    int n = arrival.size();
    vector<pair<int, int>> timings;
    for (size_t i = 0; i < n; i++)
        timings.push_back({arrival[i], dept[i]});
    sort(timings.begin(), timings.end(), [](auto &a, auto &b) { return a.first < b.first; });
    int ans = 0;
    int last = timings[0].second;
    for (auto time : timings)
    {
        if (last < time.first)
        {
            ans++;
            last = time.first;
        }
        else
            last = min(last, time.second);
    }
    return ans;
}

int main()
{
    cout << minStations({1, 2, 3, 4, 0}, {2, 3, 4, 5, 0}) << endl;
    return 0;
}