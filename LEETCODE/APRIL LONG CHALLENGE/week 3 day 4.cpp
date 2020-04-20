#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (!i && !j)
                    continue;
                if (i - 1 >= 0 && j - 1 >= 0)
                    grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
                else if (i - 1 >= 0)
                    grid[i][j] += grid[i - 1][j];
                else if (j - 1 >= 0)
                    grid[i][j] += grid[i][j - 1];
            }
        return grid[n - 1][m - 1];
    }
};