#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        map<int, int> m;
        m[0] = 1;
        int sum = 0, result = 0;
        for (int a : nums)
        {
            sum += a;
            if (m.find(sum - k) != m.end())
                result += m[sum - k];
            int count = m.find(sum - k) == m.end() ? 0 : m[sum - k];
            m.insert(make_pair(sum, count + 1));
        }
        return result;
    }
};

int main()
{
    vector<int> nums{1, 1, 1};
    Solution solve;
    cout << solve.subarraySum(nums, 2) << endl;
    return 0;
}