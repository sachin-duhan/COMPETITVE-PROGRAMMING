/*
136. Single Number

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4
*/

#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    // using hashmap will take O(n) space
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        auto itr = m.find(nums[i]);
        if (itr != m.end())
            itr->second++;
        else
            m.insert(make_pair(nums[i], 1));
    }
    for (auto itr = m.begin(); itr != m.end();)
    {
        if (itr->second == 1)
            return itr->first;
    }
}

int solution2(vector<int> &nums)
{

/*
    Concept
    If we take XOR of zero and some bit, it will return that bit
    If we take XOR of two same bits, it will return 0
    So we can XOR all bits together to find the unique number.
*/

    int a = 0;
    for (int i = 0; i < nums.size(); i++)
        a ^= nums[i];
    return a;
}

int main()
{
    vector<int> nums({2, 2, 1});
    cout << singleNumber(nums) << endl << solution2(nums) << endl;
    return 0;
}