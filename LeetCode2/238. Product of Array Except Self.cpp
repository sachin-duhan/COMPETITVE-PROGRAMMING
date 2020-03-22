#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    // https://leetcode.com/problems/product-of-array-except-self/
    vector<int> v1(nums.size(), 1), v2(nums.size(), 1), ans(nums.size(), 1);
    for (int i = 1; i < nums.size(); i++)
        v1[i] = v1[i - 1] * nums[i - 1];
    for (int i = nums.size() - 2; i >= 0; i--)
        v2[i] = v2[i - 1] * nums[i - 1];
    for (int i = 0; i < nums.size(); i++)
        ans[i] = v1[i] * v2[i];
    return ans;
}


int main()
{
    vector<int> input({1, 2, 3, 4}), solution = productExceptSelf(input);
    for (auto el : solution)
        cout << el << " ";
    cout << endl;
    return 0;
}