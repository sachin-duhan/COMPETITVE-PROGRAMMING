#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void helper(vector<vector<int>> &grid, int i, int j, int n, int m, int total, int &max_)
    {
        if (i >= n || j >= m || j < 0 || i < 0 || grid[i][j] == 0)
        {
            return;
        }
        int temp = grid[i][j];
        total += temp;
        max_ = max(max_, total);

        grid[i][j] = 0;
        helper(grid, i + 1, j, n, m, total, max_);
        helper(grid, i - 1, j, n, m, total, max_);
        helper(grid, i, j + 1, n, m, total, max_);
        helper(grid, i, j - 1, n, m, total, max_);
        grid[i][j] = temp;
    }

public:
    int getMaximumGold(vector<vector<int>> &grid)
    {
        int max_ = 0, total = 0, i, j, n, m;
        n = grid.size();
        if (n == 0)
            return 0;
        m = grid[0].size();
        if (m == 0)
            return 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (grid[i][j] != 0)
                {
                    helper(grid, i, j, n, m, 0, max_);
                }
            }
        }
        return max_;
    }
};

int main()
{
    Solution solve;
    vector<vector<int>> values{{0, 6, 0}, {5, 8, 7}, {0, 9, 0}};
    cout << solve.getMaximumGold(values) << endl;
    return 0;
}