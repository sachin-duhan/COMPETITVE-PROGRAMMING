#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int m, n;

public:
    int dfs(vector<vector<int>> mat, vector<vector<bool>> &vis, int i, int j, int curr, int k)
    {
        if (k < 0 || i < 0 || j < 0 || i >= m || j >= m || vis[i][j])
            return 0;
        vis[i][j] = true;
        int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, -1, 1};
        for (int l = 0; l < 4; l++)
            curr += dfs(mat, vis, i + dx[l], j + dy[l], curr, k - 1);
        curr += mat[i][j];
        return curr;
    }

    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int K)
    {
        m = mat.size(), n = m == 0 ? 0 : mat[0].size();
        if (K >= m - 1)
        {
            int _sum = 0;
            for (auto a : mat)
                _sum = accumulate(a.begin(), a.end(), _sum);
            vector<vector<int>> ret(m, vector<int>(n, _sum));
            return ret;
        }
        vector<vector<int>> ret(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vector<vector<bool>> vis(m, vector<bool>(n, false));
                ret[i][j] = dfs(mat, vis, i, j, 0, K);
            }
        }
        return ret;
    }
};

// prefix sum solution
class Solution
{
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int K)
    {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> sum(rows + 1, vector<int>(cols + 1, 0));
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + mat[i][j];

        vector<vector<int>> ans(rows, vector<int>(cols, 0));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                int ROW1 = max(0, i - K);
                int ROW2 = min(rows - 1, i + K);
                int COL1 = max(0, j - K);
                int COL2 = min(cols - 1, j + K);
                ans[i][j] = sum[ROW2 + 1][COL2 + 1];
                if (COL1 - 1 >= 0)
                    ans[i][j] -= sum[ROW2 + 1][COL1];
                if (ROW1 - 1 >= 0)
                    ans[i][j] -= sum[ROW1][COL2 + 1];
                if (COL1 - 1 >= 0 && ROW1 - 1 >= 0)
                    ans[i][j] += sum[ROW1][COL1];
            }
        }
        return ans;
    }
};

int main(){
return 0;
}