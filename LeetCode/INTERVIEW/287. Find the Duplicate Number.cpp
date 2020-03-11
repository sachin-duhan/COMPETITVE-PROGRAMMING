#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    /*
    =================================================================
    this algo solves the problem when there is exactly onr duplicate!
    =================================================================
    int tSum = 0, currSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        tSum += i + 1;
        currSum += nums[i];
    }
    tSum -= nums.size();
    return currSum - tSum;
*/

    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        auto itr = m.find(nums[i]);
        if (itr != m.end())
        {
            ans = nums[i];
            break;
        }
        m.insert(make_pair(nums[i], 1));
    }
    return ans;
}

int main()
{
    vector<int> nums({3, 1, 2, 4, 2});
    cout << findDuplicate(nums) << endl;
    return 0;
}

/*

Given an array nums containing n + 1 integers where each integer is between 1 
and n (inclusive), prove that at least one duplicate number must exist. 
Assume that there is only one duplicate number, find the duplicate one.

Input: [1,3,4,2,2]
Output: 2

Input: [3,1,3,4,2]
Output: 3

Input : [2,2,2,2,2]
Output : 2

Note:

You must not modify the array (assume the array is read only).
You must use only constant, O(1) extra space.
Your runtime complexity should be less than O(n2).
There is only one duplicate number in the array, but it could be repeated more than once.

*/