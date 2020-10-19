/*
TIME SPACE OVERVIEW - 
Time Complexity: O(V+E) 
Auxiliary Space: O(N)
*/

#include <bits/stdc++.h>
using namespace std;
#define maxN 200001

class Graph
{
    vector<int> adj[maxN];

public:
    int height[maxN];
    int distance[maxN];

    void addEdge(int u, int v)
    {
        this->adj[u].push_back(v);
        this->adj[v].push_back(u);
    }

    void dfs(int cur, int parent)
    {
        for (auto u : adj[cur])
        {
            if (u != parent)
            {
                dfs(u, cur);
                this->height[cur] = max(this->height[cur], this->height[u]);
            }
        }
        this->height[cur] += 1;
    }

    void _helper2(int cur, int parent)
    {
        int max1 = 0;
        int max2 = 0;
        for (auto u : adj[cur])
        {

            if (u != parent)
            {
                if (this->height[u] >= max1)
                {
                    max2 = max1;
                    max1 = this->height[u];
                }
                else if (this->height[u] > max2)
                {
                    max2 = this->height[u];
                }
            }
        }
        int sum = 0;
        for (auto u : adj[cur])
        {
            if (u != parent)
            {
                sum = ((max1 == this->height[u]) ? max2 : max1);
                if (max1 == this->height[u])
                    this->distance[u] = 1 + max(1 + max2, this->distance[cur]);
                else
                    this->distance[u] = 1 + max(1 + max1, this->distance[cur]);
                _helper2(u, cur);
            }
        }
    }
};

int main()
{

    Graph g;
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);
    }

    g.dfs(1, 0);
    g._helper2(1, 0);

    for (int i = 1; i <= n; i++)
        cout << (max(g.distance[i], g.height[i]) - 1) << " ";

    return 0;
}