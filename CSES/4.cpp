/** ======================================================================

You are given an array of n integers. You want to modify the array so that
it is increasing, i.e., every element is at least as large as the previous
 element.

On each turn, you may increase the value of any element by one.
 What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

======================================================================*/

#include <bits/stdc++.h>
using namespace std;

long long find_min_turn(vector<int> &nums)
{
    long long ans = 0;
    for (int i = 0; i < nums.size() - 1; i++)
        if (nums[i] > nums[i + 1]){
            ans += nums[i] - nums[i+1];
            nums[i+1] = nums[i];
        }
    return ans;
}

int main()
{
    int _size;
    cin >> _size;
    vector<int> nums;
    while (_size--)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << find_min_turn(nums) << endl;
    return 0;
}