#include <bits/stdc++.h>
using namespace std;
void update_by_one(int k, bool isRow, vector<vector<int>> &init)
{
    if (isRow)
        for (int i = 0; i < init[0].size(); i++)
            init[k][i]++;
    else
        for (int i = 0; i < init.size(); i++)
            init[i][k]++;
}

int oddCells(int n, int m, vector<vector<int>> &indices)
{
    vector<vector<int>> init(n, vector<int>(m, 0));
    for (int i = 0; i < indices.size(); i++)
    {
        update_by_one(indices[i][0], true, init);
        update_by_one(indices[i][1], false, init);
    }

    int ans = 0;
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < m; l++)
        {
            cout << init[k][l] << " ";
            if (init[k][l] % 2 != 0)
                ans++;
        }
        cout << endl;
    }
    return ans;
}

int main()
{
    vector<vector<int>> indices{{0, 1}, {1, 1}};
    cout << oddCells(2, 3, indices) << endl;
    return 0;
}