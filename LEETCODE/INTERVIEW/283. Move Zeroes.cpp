/*
Given an array nums, write a function to move all 0's to the end of it while 
maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    // count the number of zeros!
    int numZeros = 0;
    for (int i = 0; i < nums.size(); i++)
        numZeros += (nums[i] == 0);
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] != 0)
            ans.push_back(nums[i]);

    for (int i = 0; i < numZeros; i++)
        ans.push_back(0);

    for (int i = 0; i < ans.size(); i++)
        nums[i] = ans[i];
}

int main()
{
    vector<int> v({0, 0, 1});
    moveZeroes(v);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}