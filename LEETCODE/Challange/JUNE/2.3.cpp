#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};

int main()
{
    Solution volume;
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8};
    cout << volume.searchInsert(nums, 4) << endl;
    return 0;
}