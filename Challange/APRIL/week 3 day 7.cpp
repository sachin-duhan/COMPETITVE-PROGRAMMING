#include<bits/stdc++.h>
using namespace std;
// This is the BinaryMatrix's API interface.
// You should not implement it, or speculate about its implementation
class BinaryMatrix {
  public:
    int get(int x, int y);
    vector<int> dimensions();
};


class Solution
{
public:
    int leftMostColumnWithOne(BinaryMatrix &mat)
    {
        vector<int> dim = mat.dimensions();
        int row = dim[0], col = dim[1];
        if (!row || !col)
            return -1;
        int result = -1;
        int r = 0, c = col - 1;
        while (r < row && c >= 0)
        {
            if (mat.get(r, c) == 1)
            {
                result = c;
                c--;
            }
            else
                r++;
        }
        return result;
    }
};