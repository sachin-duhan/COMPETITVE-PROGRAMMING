#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> closestLocations(int K, int **allLocations, int truckCapacity)
{
    vector<pair<int, int>> ans;
    if (K == truckCapacity)
    {
        for (int i = 0; i < truckCapacity; i++)
            ans.push_back({allLocations[i][0], allLocations[i][1]});
        return ans;
    }

    map<double, vector<pair<int, int>>> m;
    for (int i = 0; i < truckCapacity; i++)
    {
        auto distance = sqrt(allLocations[i][0] * allLocations[i][0] + allLocations[i][1] * allLocations[i][1]);
        m[distance].push_back({allLocations[i][0], allLocations[i][1]});
    }

    for (auto itr : m)
    {
        if (K <= 0)
            break;
        else
            for (auto c : itr.second)
            {
                ans.push_back(c);
                K--;
            }
    }
    return ans;
}
