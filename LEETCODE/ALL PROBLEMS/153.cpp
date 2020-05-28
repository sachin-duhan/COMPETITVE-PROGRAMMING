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

int main()
{
    vector<int> input{1, 2, 3, 4, 5};
    Solution solve;
    cout << solve.findMin(input) << endl;
    return 0;
}