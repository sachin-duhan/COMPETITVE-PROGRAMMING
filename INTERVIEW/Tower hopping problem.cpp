#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> arr, int index)
{
    if (index > arr.size() || arr[index] + index > arr.size())
        return true;
    if (arr[index] == 0)
        return false;
    bool flag = false;
    for (int i = arr[index]; i >= 0; i--)
       if(!flag) flag = solve(arr, index + i);
    return flag;
}

int main()
{
    vector<int> input{1, 2, 3, 4, 5};
    cout << solve(input, 0) << endl;
    return 0;
}