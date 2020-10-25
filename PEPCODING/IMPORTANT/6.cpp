#include <bits/stdc++.h>
using namespace std;

void zigZag(vector<int> &nums)
{
    bool flag;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (flag)
        {
            if (nums[i] > nums[i + 1])
                swap(nums[i], nums[i + 1]);
        }
        else
        {
            if (nums[i] < nums[i + 1])
                swap(nums[i], nums[i + 1]);
        }
        flag = !flag;
    }
}

int main()
{
    vector<int> input{1, 2, 3, 6, 8, 5, 4};
    zigZag(input);
    for (auto a : input)
        cout << a << " ";
    cout << endl;
    return 0;
}