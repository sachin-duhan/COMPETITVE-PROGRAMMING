#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    // transpose
    for (int i = 0; i < matrix.size(); i++)
        for (int j = i; j < matrix[0].size(); j++)
            swap(matrix[i][j], matrix[j][i]);

    for (int i = 0; i < matrix.size(); i++)
    {
        int start = 0, end = matrix[i].size() - 1;
        while (start < end)
            swap(matrix[i][start++], matrix[i][end--]);
    }

    return;
}

int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int>> vect{{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    rotate(vect);
    // Displaying the 2D vector
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
    return 0;
}