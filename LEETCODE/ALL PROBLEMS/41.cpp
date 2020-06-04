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

class Solution2
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        bool isOne = false;
        int s = nums.size();
        if (!s)
            return 1;
        for (int a : nums)
            if (a == 1)
                isOne = true;
            else if (a <= 0 || a > s)
                a = 1;

        if (!isOne)
            return 1;
        for (int i = 0; i < s; i++)
        {
            int index = abs(s) - 1;
            if (nums[index] > 0)
                nums[index] = -1 * nums[index];
        }
        for (int i = 0; i < s; i++)
            if (nums[i] > 0)
                return i + 1;
        return s + 1;
    }
};