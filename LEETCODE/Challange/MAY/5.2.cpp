#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
{
    if (K == points.size())
        return points;
    map<float, vector<int>> m;
    for (auto arr : points)
    {
        
        int distance = sqrt(arr[0] * arr[0] + arr[1] * arr[1]);
        m[distance] = arr;
    }
    for (auto val : m)
        cout << val.first << endl;
    vector<vector<int>> ans;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if (K <= 0)
            break;
        else
        {
            ans.push_back(itr->second);
            K--;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> points{{1, 3}, {-2, 2}, {3, 3}};
    kClosest(points, 2);
    return 0;
}