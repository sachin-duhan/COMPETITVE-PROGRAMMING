/*
Given an array of integers arr, write a function that returns true if and only if the number of 
occurrences of each value in the array is unique.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have 
the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        auto itr = m.find(arr[i]);
        if (itr != m.end())
            itr->second++;
        else
            m.insert(arr[i], 1);
    }

    map<int, int> check;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if (check.find(itr->second) != check.end())
            return false;
        else
            check.insert(itr->second, itr->first);
    }
    return true;
}

int main()
{
    vector<int> arr({1, 2, 2, 1, 1, 3});
    cout << uniqueOccurrences(arr) << endl;
    return 0;
}