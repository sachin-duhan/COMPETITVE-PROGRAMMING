#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int ans = INT_MAX;
    void helper(vector<vector<int>> triangle, int level = 0, int index = 0, int curr = 0)
    {
        if (level >= triangle.size() || level < 0 || index >= triangle[level].size())
            return;
        curr += triangle[level][index];
        if (level == triangle.size() - 1)
            ans = min(ans, curr);
        if (index == 0)
            helper(triangle, level + 1, 0, curr);
        else
            helper(triangle, level + 1, index - 1, curr);
        helper(triangle, level + 1, index + 1, curr);
    }

public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        helper(triangle);
        return ans;
    }
};

class Solution
{
public:
    int minimumTotal(vector<vector<int>> &v)
    {
        int i, j;
        int n = v.size();
        if (n == 0)
            return 0;
        for (i = n - 2; i >= 0; i--)
            for (j = 0; j < v[i].size(); j++)
                v[i][j] = min(v[i][j] + v[i + 1][j], v[i][j] + v[i + 1][j + 1]);
        return v[0][0];
    }
};