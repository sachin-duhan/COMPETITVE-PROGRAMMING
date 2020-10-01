#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        return *min_element(nums.begin(), nums.end());
    }
};

class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX, i=0,j=nums.size()-1;
        while(i <= j){
            ans = min(nums[i],ans);
            ans = min(nums[j],ans);
            i++;j--;
        }
        return ans;
    }
};
