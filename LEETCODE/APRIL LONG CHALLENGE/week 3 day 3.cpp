#include <bits/stdc++.h>
using namespace std;

int numIslands(vector<vector<char>> &grid)
{
    int x = grid.size(), y = 0, numIslands = 0;
    if (x)
        y = grid[0].size();

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (grid[i][j] == '1')
            {
                findIsland(i, j, grid);
                numIslands++;
            }
        }
    }
    return numIslands;
}

void findIsland(int a, int b, vector<vector<char>> &grid)
{
    int x = grid.size();
    int y = grid[0].size();
    if (a < 0 or b < 0 or a >= x or b >= y or grid[a][b] != '1')
        return;
    grid[a][b] = '0';
    int changeX[4] = {0, -1, 1, 0}, changeY[4] = {-1, 0, 0, 1};
    for (int i = 0; i < 4; i++)
        findIsland(a + changeX[i], b + changeY[i], grid);
}

int main()
{
    vector<vector<char>> input{{0, 1, 0, 0},
                               {1, 1, 0, 0},
                               {0, 0, 1, 0},
                               {0, 0, 0, 1}};
    cout << numIslands(input) << endl;
    return 0;
}