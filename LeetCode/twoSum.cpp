#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define loop(i, a, n) for (auto i = a; i < n; i++)

bool solve(vector<int> nums, int target)
{
    map<int, int> m;
    loop(i, 0, nums.size())
        m[target - nums[i]] = nums[i];

    for (auto x : nums)
        if (m.find(x) != m.end())
            return true;

    return false;
}

int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    solve(nums, target) == 1 ? cout << "true\n" : cout << "false\n";
    return 0;
}