#include <bits/stdc++.h>
using namespace std;

class Solution_failed
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int _size = nums.size();
        vector<int> ans;
        for (int i = 0; i < _size; i++)
        {
            vector<int> temp;
            int num = nums[i];
            temp.push_back(num);
            if (nums[i] > 0)
                for (int j = i + 1; j < _size; j++)
                    if (nums[j] % num == 0)
                    {
                        temp.push_back(nums[j]);
                        num = nums[j];
                        nums[j] = -1;
                    }
            if (temp.size() > ans.size())
                ans = temp;
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size()==0) return nums;
        sort(nums.begin(),nums.end());
        int flag=1;
        if(nums[0]==1) flag=0;
        else{
            nums.push_back(1);
            flag=1;
        }
        sort(nums.begin(),nums.end());
        int i,j;
        int dp[nums.size()][2];
        for(i=nums.size()-1;i>=0;i--){
            dp[i][0]=0;
            dp[i][1]=i;
            for(j=i+1;j<nums.size();j++){
                if((nums[j]%nums[i])==0){
                    if(dp[j][0]>dp[i][0]){
                        dp[i][0]=dp[j][0];
                        dp[i][1]=j;
                    }  
                }
            }
            dp[i][0]++;
        }
        i=0;
        vector<int> t;
        t.push_back(nums[i]);
        while(dp[i][1]!=i){
            i=dp[i][1];
            t.push_back(nums[i]);
            
        }
        if(flag==1){
            t.erase(t.begin());
        }
        return t;
        
    }
};

int main()
{
    Solution solution;
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 18, 32}, ans = solution.largestDivisibleSubset(v);
    for (int a : ans)
        cout << a << " ";
    cout << endl;
    return 0;
}