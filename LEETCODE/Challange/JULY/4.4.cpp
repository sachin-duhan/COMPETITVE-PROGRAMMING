#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        return *min_element(nums.begin(), nums.end());
    }
};
