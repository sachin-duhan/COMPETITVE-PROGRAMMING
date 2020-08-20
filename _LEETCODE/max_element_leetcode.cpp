#include <bits/stdc++.h>
using namespace std;
int max_element(vector<int> nums)
{
    int index = 0, n = nums.size();
    for (size_t i = 0; i < n; i++)
    {
        if (nums[i] > nums[index])
            index = i;
    }
    for (size_t i = 0; i < n; i++)
    {
        if (index != i && nums[index] < 2 * nums[i])
            return -1;
    }
    return index;
}
int main() {}