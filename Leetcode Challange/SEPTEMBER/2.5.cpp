
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    map<string, vector<int>> m;
    void helper(const vector<int> nums, const int target, const int n, int index, vector<int> curr, int sum = 0)
    {
        if (sum > target || index >= nums.size() || sum > target || curr.size() > n)
            return;
        if (sum == target && curr.size() == n)
        {
            string key = "";
            for (auto a : curr)
                key += to_string(a);
            if (m.find(key) == m.end())
                m[key] = curr;

            auto itr = curr.begin();
            sum -= curr[n - 1];
            auto it = curr.begin();
            advance(it, n - 1);
            curr.erase(it);
            for (int i = index + 1; i < nums.size(); i++)
                helper(nums, target, n, i, curr, sum);
        }
        else
        {
            curr.push_back(nums[index]);
            sum += nums[index];
            for (int i = index + 1; i < nums.size(); i++)
                helper(nums, target, n, i, curr, sum);
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int target)
    {
        vector<int> nums;
        for (int i = 1; i < target; i++)
            nums.push_back(i);
        helper(nums, target, k, 0, {}, 0);
        vector<vector<int>> ans;
        for (auto vals : m)
            ans.push_back(vals.second);
        return ans;
    }
};

int main()
{
    return 0;
}
