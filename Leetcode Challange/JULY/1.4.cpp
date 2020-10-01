#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int nthUglyNumber(int n)
    {
        if (n < 7)
            return n;
        vector<int> nums;
        nums.push_back(1);
        int i = 0, j = 0, k = 0;
        while (nums.size() < n)
        {
            int t1 = nums[i] * 2, t2 = nums[j] * 3, t3 = nums[k] * 5;
            int new_ugly = min(t1, min(t2, t3));
            nums.push_back(new_ugly);
            if (new_ugly == t1)
                i++;
            if (new_ugly == t2)
                j++;
            if (new_ugly == t3)
                k++;
        }
        return nums[nums.size() - 1];
    }
};