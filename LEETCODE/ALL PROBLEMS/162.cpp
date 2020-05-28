#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
                return i;
        }
        return nums.size() - 1;
    }
};

int main()
{
    vector<int> input{1, 2, 3, 4, 5, 6, 6, 8, 4};
    Solution solve;
    cout << solve.findPeakElement(input) << endl;
    return 0;
}