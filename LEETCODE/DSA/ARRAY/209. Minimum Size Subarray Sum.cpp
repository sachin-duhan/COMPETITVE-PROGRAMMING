#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int s, vector<int> &nums)
{
    int mini = INT_MAX, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int val = s - nums[i], j = i+1;
        while (val && j < n)
        {
            val -= nums[j];
            if (val == 0)
                mini = min(mini, j - i + 1);
            j++;
        }
    }
    return mini == INT_MAX ? 0 : mini;
}

int main()
{
    vector<int> v({2, 3, 1, 2, 4, 3});
    cout << minSubArrayLen(7, v) << endl;
    return 0;
}