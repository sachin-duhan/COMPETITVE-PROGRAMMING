#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subarra(vector<int> nums)
{
    vector<vector<int>> ans;
    for (size_t i = 0; i < nums.size(); i++)
    {

        vector<int> temp;
        temp.push_back(nums[i]);
        for (size_t j = i + 1; j + 1 < nums.size(); j++)
            temp.push_back(nums[j]);
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    vector<int> nums = {10, 20, 30, 50, 40};
    auto ans = subarra(nums);
    for (auto arr : ans)
    {
        for (int a : arr)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}
