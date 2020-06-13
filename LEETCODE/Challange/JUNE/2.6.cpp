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
            temp.push_back(nums[i]);
            for (int j = i + 1; j < _size; j++)
            {
                
            }
            if (temp.size() > ans.size()) ans = temp;
        }
    }
};

int main()
{
    Solution solution;
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8}, ans = solution.largestDivisibleSubset(v);
    for (int a : ans)
        cout << a << " ";
    cout << endl;
    return 0;
}