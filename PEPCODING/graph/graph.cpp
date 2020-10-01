#include <bits/stdc++.h>
using namespace std;

class Graph
{
    map<int, vector<int>> path;

public:
    Graph(vector<vector<int>> edges)
    {
        for (auto edge : edges)
        {
            path[edge[0]].push_back(edge[1]);
            path[edge[1]].push_back(edge[0]);
        }
    }

    bool isPath(int start, int end)
    {
        if (path.find(start) == path.end() || path.find(end) == path.end())
            return false;
        map<int, bool> vis;
        queue<int> q;
        q.push(start);
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            for (auto node : path[curr])
            {
                if (node == end)
                    return true;
                else if (!vis[node])
                    q.push(node);
            }
        }
        return false;
    }
};

int main() { return 0; }