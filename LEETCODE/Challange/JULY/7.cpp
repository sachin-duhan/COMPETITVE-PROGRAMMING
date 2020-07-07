#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int ans, m, n;
    int add_to_perimeter(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &visited)
    {
        int perimeter = 0;
        if (grid[i][j] == 0)
            return perimeter;

        perimeter += (i > 0 && grid[i - 1][j] == 0) ? 1 : 0;
        perimeter += (j > 0 && grid[i][j - 1] == 0) ? 1 : 0;
        perimeter += (i < m - 1 && grid[i + 1][j] == 0) ? 1 : 0;
        perimeter += (i < n && grid[i][j + 1] == 0) ? 1 : 0;

        return perimeter;
    }

    void dfs(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &visited)
    {
        if (grid[i][j] == 0)
            return;

        ans += add_to_perimeter(grid, i, j, visited);
        visited[i][j] = 0;

        if(i>0)dfs(grid,i-1,j,visited);
        if(j>0)dfs(grid,i,j-1,visited);
        if(i<m-1)dfs(grid,i+1,j,visited);
        if(j<n-1)dfs(grid,i,j+1,visited);
    }

public:
    int islandPerimeter(vector<vector<int>> grid)
    {
        ans = 0;
        m = grid.size();
        n = m > 0 ? grid[0].size() : 0;
        auto visited = grid;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1 && visited[i][j] == 1)
                    dfs(grid, i, j, visited);
        return ans;
    }
};
int main()
{
}