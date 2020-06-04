#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {

        const size_t size = nums.size() + 1;
        int *array_of_int = new int[size]();

        for (const auto num : nums)
        {
            if (num > (int)size - 1 || num < 1)
                continue;
            array_of_int[num] = 1;
        }

        int i = 0;

        for (i = 1; i < size; i++)
        {
            if (array_of_int[i] == 0)
                break;
        }

        delete[] array_of_int;
        return i;
    };
};
