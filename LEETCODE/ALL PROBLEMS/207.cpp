#include <bits/stdc++.h>
using namespace std;
// approach one // wron answer!!
class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> colors(numCourses, -1);
        for (auto val : prerequisites)
        { // val is an array!
            if (colors[val[0]] != -1)
            {
                if (colors[val[0]] != 0 || colors[val[1]] == 0)
                    return false;
            }
            else
            {
                colors[val[0]] = 0;
                colors[val[1]] = 1;
            }
        }
        return true;
    }
};