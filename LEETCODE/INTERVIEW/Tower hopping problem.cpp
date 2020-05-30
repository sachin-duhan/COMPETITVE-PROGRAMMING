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
        if (!flag)
            flag = solve(arr, index + i);
    return flag;
}

int solve2(vector<int> arr)
{
    int index = 0;
    while (index < arr.size())
    {
        int new_index = 0;
        for (int i = 1; i < arr[index]; i++)
        {
            if (index + i >= arr.size())
                return true;
            else
                new_index = max(new_index, arr[index + i]);
        }
        if(index == 0) return false;
        else index = new_index;
    }
    return true;
}

int main()
{
    vector<int> input{1, 2, 3, 4, 5};
    cout << solve(input, 0) << endl;
    return 0;
}