#include <bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int> nums, int k)
{
    k %= nums.size();
    if (k == 0)
        return nums;
    auto itr = nums.begin();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    return nums;
}

int main()
{
    int k, n;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    arr = rotate(arr, k);
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}