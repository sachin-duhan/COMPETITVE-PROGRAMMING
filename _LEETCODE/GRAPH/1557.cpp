#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<bool> vis(n, false);
        for (auto edge : edges)
            vis[edge[1]] = true;
        vector<int> ans;
        for (int i = 0; i < n; i++)
            if (!vis[i])
                ans.push_back(i);
        return ans;
    }
};

int main()
{
    vector<vector<int>> edge = {{0, 1}, {0, 2}, {2, 5}, {3, 4}, {4, 2}};
    Solution solve;
    solve.findSmallestSetOfVertices(6, edge);
    return 0;
}