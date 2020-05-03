#include <iostream>
#include <vector>
using namespace std;

int countSquares(vector<vector<int>> &matrix)
{
    int R = matrix.size(), C = matrix[0].size(), count = 0;
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            if (matrix[i][j] && i && j)
                matrix[i][j] += min(matrix[i - 1][j], min(matrix[i][j - 1], matrix[i - 1][j - 1]));
            count += matrix[i][j];
        }
    }
    return count;
}

main()
{
    vector<vector<int>> matrix = {{0, 1, 1, 1},
                                  {1, 1, 1, 1},
                                  {0, 1, 1, 1}};
    cout << countSquares(matrix) << endl;
    return 0;
}