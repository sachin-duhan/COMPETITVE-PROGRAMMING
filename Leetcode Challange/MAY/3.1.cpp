#include <bits/stdc++.h>
using namespace std;

int kadanes_algo(const vector<int> nums)
{
    int _size = nums.size(), ans = INT_MIN, curr = nums[0];
    for (int i = 0; i < _size; ++i)
    {
        curr += nums[i];
        ans = max(ans, curr);
        if (curr < 0)
            curr = 0;
    }
    return ans;
}

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = A.size();
        int max_straight_SUM = INT_MIN;
        int min_straight_SUM = INT_MAX;
        int array_SUM = 0;
        
        int temp_maxSUM = 0;
        int temp_minSUM = 0;
        
        for(int i=0;i<n;++i)
        {
            array_SUM +=A[i];
            
            temp_maxSUM += A[i];
            max_straight_SUM = max_straight_SUM<temp_maxSUM? temp_maxSUM:max_straight_SUM;
            temp_maxSUM = temp_maxSUM<0?0:temp_maxSUM;
            
            temp_minSUM += A[i];
            min_straight_SUM = min_straight_SUM>temp_minSUM? temp_minSUM:min_straight_SUM;
            temp_minSUM = temp_minSUM>0?0:temp_minSUM;
        }
        if(array_SUM==min_straight_SUM)
            return max_straight_SUM;
        return max(max_straight_SUM,(array_SUM-min_straight_SUM));
    }
};

int main()
{
    vector<int> v{-2, -3, 4, -1, -2, 1, 5, -3};
    cout << kadanes_algo(v) << endl;
    return 0;
}