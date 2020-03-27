#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    int total = 0, num_sum = 0;
    vector<int> ans(2, 0);
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        auto itr = m.find(nums[i]);
        if (itr != m.end())
            ans[0] = nums[i];
        else
            m.insert(make_pair(nums[i], 1));
        total += i + 1;
        num_sum += nums[i];
    }
    ans[1] = ans[0] + total - num_sum;
    return ans;
}

int main()
{
    vector<int> nums({1, 2, 2, 4});
    vector<int> v = findErrorNums(nums);
    cout << v[0] << " " << v[1] << endl;
    return 0;
}

/*
The set S originally contains numbers from 1 to n. But unfortunately, 
due to the data error, one of the numbers in the set got duplicated to another number in the set, 
which results in repetition of one number and loss of another number.

Given an array nums representing the data status of this set after the error. 
Your task is to firstly find the number occurs twice and then find the number that is missing. 
Return them in the form of an array.

Input: nums = [1,2,2,4]
Output: [2,3]

Note:
The given array size will in the range [2, 10000].
The given array's numbers won't have any order.

*/