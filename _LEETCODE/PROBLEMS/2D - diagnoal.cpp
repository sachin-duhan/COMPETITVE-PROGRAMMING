#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int m = matrix.size(), n = m == 0 ? 0 : matrix[0].size(), size = m * n;
        ans.push_back(matrix[0][0]);
        int i = 0, j = 1;
        bool flag = false;
        while (ans.size() < size)
        {
            if (!flag)
                i = 0;
            else
                j = 0;
            if (flag)
                while (i >= 0)
                    ans.push_back(matrix[i--][j++]);
            else
                while (j >= 0)
                    ans.push_back(matrix[i++][j--]);
            flag = !flag;
        }
        return ans;
    }
};

//  [ 1, 2, 3 ]
//  [ 4, 5, 6 ]
//  [ 7, 8, 9 ]

int main()
{

    return 0;
}