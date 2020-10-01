#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        if (nums.empty())
            return ans;
        int n = pow(2, nums.size());
        for (int i = 0; i < n; ++i)
        {
            vector<int> v;
            int mask = 1;
            for (int j = 0; j < nums.size(); ++j)
            {
                if (i & (mask << j))
                    v.push_back(nums[j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};

int main() {}