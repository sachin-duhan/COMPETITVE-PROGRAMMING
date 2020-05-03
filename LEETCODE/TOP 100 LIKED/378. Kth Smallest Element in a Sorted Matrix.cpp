#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> mat, int k)
{
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
            q.push(mat[i][j]);
    }
    k -= 1;
    while (k--)
        q.pop();
    return q.top();
}

int anotherSolution(vector<vector<int>> matrix, int k)
{
    vector<int> t;
    int len = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        t.insert(t.end(), matrix[i].begin(), matrix[i].end());
    }
    sort(t.begin(), t.end());

    return t[k - 1];
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}};
    cout << solve(matrix, 7) << endl;
    return 0;
}