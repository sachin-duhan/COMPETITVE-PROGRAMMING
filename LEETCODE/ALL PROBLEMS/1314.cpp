#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int m, n;

public:
    int dfs(vector<vector<int>> mat, int i, int j, int curr, int k)
    {
        if (k < 0 || i + k > m || j + k > n || i < 0 || j < 0 || i >= m || j >= m)
            return 0;
        int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, -1, 1};
        curr += mat[i][j];
        for (int l = 0; l < 4; l++)
            curr += dfs(mat, i + dx[l], j + dy[l], curr, k - 1);
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
                ret[i][j] = dfs(mat, i, j, 0, K);
            }
        }
        return ret;
    }
};

int main(){
return 0;
}