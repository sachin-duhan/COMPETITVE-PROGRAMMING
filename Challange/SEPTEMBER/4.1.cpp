
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> nums)
{
    vector<int> ans;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(nums[i] == INT_MIN) continue;
        int count = 0, number = nums[i];
        for (size_t j = 0; j < nums.size(); j++)
        {
            if (nums[j] == number)
            {
                count++;
                nums[j] = INT_MIN;
            }
        }
        if (count > (nums.size() / 3) && number != INT_MIN)
            ans.push_back(number);
    }
    return ans;
}

int main()
{
    vector<int> val = {1, 1, 1, 2, 2, 3, 3, 3};
    auto tmp = majorityElement(val);
    for(auto a : tmp) cout << a << " ";
    cout << endl;
    return 0;
}
