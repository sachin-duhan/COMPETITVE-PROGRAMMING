#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int _size = nums.size();
        vector<int> ans;
        for (int i = 0; i < _size; i++)
        {
            vector<int> temp;
            int num = nums[i];
            temp.push_back(num);
            if (nums[i] > 0)
                for (int j = i + 1; j < _size; j++)
                    if (nums[j] % num == 0)
                    {
                        temp.push_back(nums[j]);
                        num = nums[j];
                        nums[j] = -1;
                    }
            if (temp.size() > ans.size())
                ans = temp;
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 18, 32}, ans = solution.largestDivisibleSubset(v);
    for (int a : ans)
        cout << a << " ";
    cout << endl;
    return 0;
}