#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int m, n, ans;
    void dfs(vector<vector<int>> &grid, int i, int j, int curr)
    {
        if (grid[i][j] == 0)
            return;
        grid[i][j] = 0;
        curr += 1;
        ans = max(ans, curr);
        if (i < m - 1)
            dfs(grid, i + 1, j, curr);
        if (i > 0)
            dfs(grid, i - 1, j, curr);
        if (j > 0)
            dfs(grid, i, j - 1, curr);
        if (j < n - 1)
            dfs(grid, i, j + 1, curr);
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        m = grid.size();
        n = grid[0].size();
        ans = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1)
                    dfs(grid, i, j, 0);
        return ans;
    }
};