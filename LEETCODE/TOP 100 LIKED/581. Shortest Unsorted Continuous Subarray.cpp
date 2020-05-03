#include <vector>
#include <iostream>
using namespace std;
int findUnsortedSubarray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> snums(n);
    for (int i = 0; i < n; i++)
        snums[i] = nums[i];
    int l = n, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (snums[i] != nums[i])
        {
            l = min(l, i);
            r = max(r, i);
        }
    }
    return (r - l >= 0 ? r - l + 1 : 0);
}

int main()
{
    vector<int> arr({2, 6, 4, 8, 10, 9, 15});
    cout << findUnsortedSubarray(arr) << endl;
    return 0;
}