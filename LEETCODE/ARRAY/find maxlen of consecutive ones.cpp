#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int ans = 0, itr = 0, curr = 0;
    while (itr < nums.size())
    {
        if (nums[itr] != 1)
            curr = 0;
        else
        {
            curr++;
            ans = max(curr, ans);
        }
        itr++;
    }
    return ans;
}

int main()
{
    
    return 0;
}