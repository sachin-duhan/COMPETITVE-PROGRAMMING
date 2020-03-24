#include <bits/stdc++.h>
using namespace std;
vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> output;
    for (int i = 0; i < nums.size(); i++)
    {
        output.push_back(nums[i]);
        if (i != index[i])
        {
            int j = i;
            while (j != index[i] && j)
            {
                swap(output[j], output[j - 1]);
                j--;
            }
        }
    }
    return output;
}

int main()
{
    vector<int> nums({1, 2, 3, 4, 0}), index({0, 1, 2, 3, 0}), ans = createTargetArray(nums, index);
    for (auto el : ans)
        cout << el << " ";
    cout << endl;
    return 0;
}