#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
    {
        if (n == 1)
            return vector<int>{0};
        vector<int> adj[n];
        vector<int> deg(n, 0);
        for (auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            deg[it[0]]++;
            deg[it[1]]++;
        }
        vector<int> prev, next;
        for (int i = 0; i < n; i++)
            if (deg[i] == 1)
                prev.push_back(i);

        while (true)
        {
            next.clear();
            for (int i = 0; i < prev.size(); i++)
            {
                int t = prev[i];
                for (auto it : adj[t])
                {
                    deg[it]--;
                    if (deg[it] == 1)
                        next.push_back(it);
                }
            }
            if (next.size() == 0)
                return prev;
            prev = next;
        }
    }
};