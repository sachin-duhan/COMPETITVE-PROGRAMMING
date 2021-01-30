
#include <bits/stdc++.h>
using namespace std;

int max_of_array(vector<int> nums)
{
    int ans = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
        ans = max(ans, nums[i]);
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    // cout << *max_element(nums.begin(), nums.end()) << endl;
    cout << max_of_array(nums) << endl;
    return 0;
}
