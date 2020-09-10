
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr, int index)
{
    if (index >= arr.size())
        return;
    print(arr, index + 1);
    cout << arr[index];
}

int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 8};
    print(nums, 0);
    cout << "\n";
    return 0;
}
