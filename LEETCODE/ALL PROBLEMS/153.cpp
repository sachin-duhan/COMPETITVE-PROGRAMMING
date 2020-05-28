#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    return *min_element(nums.begin(), nums.end());
}

int findMin_using_binary_search(vector<int> &nums)
{
    int lo = 0, hi = nums.size() - 1;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < nums[hi])
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return nums[lo];
}

int main()
{
    vector<int> input{1, 2, 3, 4, 5};
    cout << findMin(input) << endl;
    return 0;
}