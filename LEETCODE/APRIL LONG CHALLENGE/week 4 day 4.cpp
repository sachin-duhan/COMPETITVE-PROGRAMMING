#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    int i = 0, last = 0;
    stack<int> s;
    while (i < n - 1)
    {
        if (i == 0 && nums[i] == 0)
            return false;
        else
        {
            if (nums[i] <= 0)
            {
                if (s.empty())
                    return false;
                i -= s.top();
                s.pop();
                nums[i]--;
            }
            else
            {
                s.push(nums[i]);
                i += nums[i];
            }
        }
    }
    return true;
}

int main()
{
    vector<int> nums= {3,2,1,0,5};
    cout << canJump(nums) << endl;
    return 0;
}