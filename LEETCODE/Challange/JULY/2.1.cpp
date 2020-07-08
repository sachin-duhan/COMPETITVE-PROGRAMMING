// 3 sum problem 
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> bag;
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int l = i+1, h = n-1;
            while(l<h){
                int sum = nums[i] + nums[l] + nums[h];
                if(sum == 0)bag.insert({nums[i],nums[l++],nums[h--]});
                else if(sum < 0) l++;
                else h--;
            }
        }
        for (auto a:bag) ans.push_back(a);
        return ans;
    }
};
