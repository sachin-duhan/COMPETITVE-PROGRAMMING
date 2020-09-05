#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        for (int i = 0, j = n; i < n && j < 2 * n; i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};