#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> threeSum;
        int n = nums.size();
        if(nums.size() < 3 || nums[0] > 0 || nums[n-1] < 0) return threeSum;
        for (int i = 0; i < n-2; i++)
        {
            if(i==0 || (i > 0 && nums[i] != nums[i-1])){
                int low = i+1;
                int high = n-1;
                int sum = 0-nums[i];
                while (low < high)
                {
                    int curr_sum = nums[low] + nums[high];
                    if(curr_sum == sum){
                        threeSum.push_back({nums[i],nums[low],nums[high]});
                        while(low < high && nums[low] == nums[low+1])low++;
                        while(low < high && nums[high] == nums[high-1])high--;
                        low++;
                        high--;
                    }
                    else if(curr_sum > sum) high--;
                    else low++;
                }
            }
        }
        return threeSum;
    }
};