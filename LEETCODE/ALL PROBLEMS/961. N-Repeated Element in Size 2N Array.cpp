#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int repeatedNTimes(vector<int> &A)
{
    // map<int, int> m;
    // int ans = 0;
    // for (int i = 0; i < A.size(); i++)
    // {
    //     if (m.find(A[i])->second)
    //         m.find(A[i])->second++;
    //     else
    //         m.insert(A[i], 1);
    // }

    // map<int, int>::iterator itr;
    // int count = 0;

    // for (itr = m.begin(); itr != m.end(); ++itr)
    // {
    //     if (itr->second > count)
    //     {
    //         count = itr->second;
    //         ans = itr->first;
    //     }
    // }
    // return ans;

    // order of O(nLog(n))
    sort(A.begin(), A.end());
    int count = 0, ans = A[0], maxi = 0;
    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] == A[i + 1])
            count++;
        if (maxi < count)
        {
            maxi = count;
            ans = A[i];
        }
    }
    return ans;
}

int main()
{
    vector<int> v({1, 2, 3, 3});
    cout << repeatedNTimes(v) << endl;
    return 0;
}

/*
In a array A of size 2N, there are N+1 unique elements, 
and exactly one of these elements is repeated N times.

Return the element repeated N times.

 

Example 1:

Input: [1,2,3,3]
Output: 3
Example 2:

Input: [2,1,2,5,3,2]
Output: 2
Example 3:

Input: [5,1,5,2,5,3,5,4]
Output: 5
 

Note:

4 <= A.length <= 10000
0 <= A[i] < 10000
A.length is even

*/
