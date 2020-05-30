#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[(i + k) % n] = nums[i];
    for (int i = 0; i < n; i++)
        nums[i] = v[i];
}

// void rotate(int[] nums, int k)
// {
//     k %= nums.length;
//     reverse(nums, 0, nums.length - 1);
//     reverse(nums, 0, k - 1);
//     reverse(nums, k, nums.length - 1);
// }

// void reverse(int[] nums, int start, int end)
// {
//     while (start < end)
//     {
//         int temp = nums[start];
//         nums[start] = nums[end];
//         nums[end] = temp;
//         start++;
//         end--;
//     }
// }

int main()
{
    vector<int> v({1, 2, 3, 4, 5, 6, 7});
    rotate(v, 3);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}