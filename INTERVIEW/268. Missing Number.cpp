/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, 
find the one that is missing from the array.

Example 1:

Input: [3,0,1]
Output: 2
Example 2:

Input: [9,6,4,2,3,5,7,0,1]
Output: 8

Note:
Your algorithm should run in linear runtime complexity. 
Could you implement it using only constant extra space complexity?

*/

#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> nums)
{
    int tSum = 0, numSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        tSum += i;
        numSum += nums[i];
    }
    tSum += nums.size();
    return tSum - numSum;
}
int main()
{
    vector<int> nums({3, 0, 1});
    cout << solve(nums) << endl;
    return 0;
}