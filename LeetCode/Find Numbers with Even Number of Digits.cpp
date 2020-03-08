/*
Given an array nums of integers, return how many of them contain an even number of digits.
 
Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

*/

#include <iostream>
#include <vector>
using namespace std;

bool isEven(int num)
{
    bool flag = true;
    while (num)
    {
        num /= 10;
        flag = !flag;
    }
    return flag;
}

int findNumbers(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
        if (isEven(nums[i]))
            ans++;
    return ans;
}

int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << findNumbers(nums);
    return 0;
}