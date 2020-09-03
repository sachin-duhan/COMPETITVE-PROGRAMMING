#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
{
    if (K == points.size())
        return points;
    map<float, vector<vector<int>>> m;
    for (auto arr : points)
    {
        float distance = sqrt(arr[0] * arr[0] + arr[1] * arr[1]);
        m[distance].push_back(arr);
    }
    vector<vector<int>> ans;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if (K <= 0)
            break;
        else
            for (auto c : itr->second)
            {
                ans.push_back(c);
                K--;
            }
    }
    return ans;
}

int main()
{
    vector<vector<int>> points{{1, 1}, {-2, 2}, {3, 3}};
    kClosest(points, 2);
    return 0;
}