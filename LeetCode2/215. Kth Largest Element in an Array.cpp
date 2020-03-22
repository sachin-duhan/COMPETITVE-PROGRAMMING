#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size()-k];
}

int main()
{
    vector<int> input({3, 2, 3, 1, 2, 4, 5, 5, 6});
    int k = 3, ans = findKthLargest(input, k);
    cout << ans << endl;
    return 0;
}