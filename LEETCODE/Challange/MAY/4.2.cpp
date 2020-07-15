#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>> &A, vector<vector<int>> &B)
    {
        int i = 0, j = 0, A_size = A.size(), B_size = B.size();
        vector<vector<int>> ans;
        if (!A_size || !B_size)
            return ans;
        while (i < A_size && j < B_size)
        {
            if (A[i][1] < B[j][0])
                i++;
            else if (A[i][0] > B[j][1])
                j++;
            else
            {
                ans.push_back({max(A[i][0], B[j][0]), min(A[i][1], B[j][1])});
                if (A[i][1] < B[j][1])
                    i++;
                else
                    j += 1;
            }
        }
        return ans;
    }
};