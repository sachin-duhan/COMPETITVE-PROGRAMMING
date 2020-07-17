#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int fare;
    void dfs(int curr_node, int end, int k, int cost, vector<vector<pair<int, int>>> &adj, vector<bool> &visited)
    {
        if (cost >= fare || k < -1)
            return;
        if (curr_node == end)
        {
            fare = min(fare, cost);
            return;
        }

        visited[curr_node] = true;
        for (auto p : adj[curr_node])
        {
            if (!visited[p.first])
                dfs(curr_node, end, k, cost, adj, visited);
        }
        visited[curr_node] = false;
    }

public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int K)
    {
        fare = INT_MAX;
        vector<vector<pair<int, int>>> adj(n);

        for (int i = 0; i < flights.size(); i++)
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});

        vector<bool> visited(n + 1, false);
        dfs(src, dst, K, 0, adj, visited);
        if (fare == INT_MAX)
            return -1;
        return fare;
    }
};
