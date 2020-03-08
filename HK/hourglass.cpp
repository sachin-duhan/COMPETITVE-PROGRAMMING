#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> mat)
{
    int C = mat.size();
    int R = mat.size();
    // cout << R << " " << C << endl;
    int max_sum = INT_MIN;
    for (int i = 0; i < R - 2; i++)
    {
        for (int j = 0; j < C - 2; j++)
        {
            int sum = (mat[i][j] + mat[i][j + 1] + mat[i][j + 2]) +
                      (mat[i + 1][j + 1]) +
                      (mat[i + 2][j] + mat[i + 2][j + 1] + mat[i + 2][j + 2]);
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 5, 7, 8},
        {1, 2, 3, 5, 7, 8},
        {1, 2, 3, 5, 7, 8},
        {1, 2, 3, 5, 7, 8},
        {1, 2, 3, 5, 7, 8},
        {1, 2, 3, 5, 7, 8},
    };
    cout << hourglassSum(arr);
    return 0;
}
