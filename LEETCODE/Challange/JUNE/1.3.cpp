#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>> &costs)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < costs.size(); i++)
            pq.push(make_pair(costs[i][0] - costs[i][1], i));

        int A = 0, B = 0;
        for (int i = 0; i < costs.size() / 2; i++)
        {
            A += costs[pq.top().second][0];
            pq.pop();
        }

        for (int i = 0; i < costs.size() / 2; i++)
        {
            B += costs[pq.top().second][1];
            pq.pop();
        }

        return A + B;
    }
};