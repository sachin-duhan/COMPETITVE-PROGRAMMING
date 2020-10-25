#include <bits/stdc++.h>
using namespace std;
int equillibrium(vector<int> nums)
{
    int n = nums.size();
    for (size_t i = 1; i < n; i++)
        nums[i] += nums[i - 1];
    for (int a : nums)
        cout << a << " ";
    cout << endl;
    for (size_t i = 1; i < n; i++)
    {
        int r = (nums[n - 1] - nums[i]);
        if (nums[i - 1] == r)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> input{-7, 1, 5, 2, -4, 3, 0};
    cout << equillibrium(input) << endl;
    return 0;
}