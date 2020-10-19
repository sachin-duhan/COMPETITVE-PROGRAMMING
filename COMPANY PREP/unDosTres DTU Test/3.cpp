/*
TIME SPACE OVERVIEW - 
Time Complexity: O(V+E) 
Auxiliary Space: O(N)
*/

#include <bits/stdc++.h>
using namespace std;
#define maxN 200001
vector<int> adj[maxN];
int height[maxN];
int dist[maxN];

void addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs1(int curr_node, int par)
{
    for (auto u : adj[curr_node])
    {
        if (u != par)
        {
            dfs1(u, curr_node);
            height[curr_node] = max(height[curr_node], height[u]);
        }
    }
    height[curr_node] += 1;
}

void dfs2(int curr_node, int par)
{
    int max1 = 0;
    int max2 = 0;
    for (auto u : adj[curr_node])
    {

        if (u != par)
        {
            if (height[u] >= max1)
            {
                max2 = max1;
                max1 = height[u];
            }
            else if (height[u] > max2)
            {
                max2 = height[u];
            }
        }
    }
    int sum = 0;
    for (auto u : adj[curr_node])
    {
        if (u != par)
        {
            sum = ((max1 == height[u]) ? max2 : max1);
            if (max1 == height[u])
                dist[u] = 1 + max(1 + max2, dist[curr_node]);
            else
                dist[u] = 1 + max(1 + max1, dist[curr_node]);
            dfs2(u, curr_node);
        }
    }
}

int main()
{
    int n = 5;

    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(3, 4);
    addEdge(3, 5);

    dfs1(1, 0);
    dfs2(1, 0);

    for (int i = 1; i <= n; i++)
        cout << (max(dist[i], height[i]) - 1) << " ";

    return 0;
}