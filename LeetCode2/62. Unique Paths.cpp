#include <bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>> &matrix, int &ans, pair<int, int> position, pair<int, int> target)
{
    int xBound = matrix.size() - 1, yBound = matrix[0].size() - 1;
    if ((position.first == target.first && position.second == target.second) || position.first > xBound || position.second > yBound)
        return;
    if (position.first == xBound || position.first <= position.second)
        position.second++;
    else if (position.second >= yBound || position.first > position.second)
        position.first++;
    ans += max(position.first, position.second);
    helper(matrix, ans, position, target);
}

int uniquePaths(int m, int n)
{
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    int ans = 0;
    helper(matrix, ans, make_pair(0, 0), make_pair(m - 1, n - 1));
    return ans;
}

int main()
{
    int m = 3, n = 2;
    cout << uniquePaths(m, n) << endl;
    return 0;
}