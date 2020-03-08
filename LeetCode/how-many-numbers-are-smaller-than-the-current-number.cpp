/* Given the array nums, for each nums[i] find out how many numbers in the array are
smaller than it. That is, for each nums[i] you have to count the number of valid j's
such that j != i and nums[j] < nums[i].

Return the answer in an array. */

#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> ans(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
            if (nums[i] > nums[j])
                ans[i]++;
    }
    return ans;
}

int main()
{
    vector<int> v = {8, 1, 2, 2, 3};

    // map<int, int> m;
    // for (int i = 0; i < v.size(); i++)
    //     m.insert(i, v[i]);

    // sort(v.begin(), v.end());

    // vector<int> ans(v.size(), 0);

    // for (int i = 0; i < v.size(); i++)
    //     ans[m.find(v[i])->first] = v.size() - i;

    vector<int> ans = smallerNumbersThanCurrent(v);

    for (int i = 0; i < v.size(); i++)
        cout << ans[i] << " ";

    cout << "/n";
    return 0;
}