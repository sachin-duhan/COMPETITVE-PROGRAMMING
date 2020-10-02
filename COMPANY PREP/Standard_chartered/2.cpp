// subarray with sum = k
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, const int k)
{
    int curr = 0, start = 0, end = 0;
    while (end < nums.size())
    {
        if (curr == k)
        {
            cout << start << " " << end - 1 << endl;
            return;
        }
        if (curr > k)
            curr -= nums[start++];
        else
            curr += nums[end++];
    }
}

int subArraySum(int arr[], int n, int sum)
{
    /* Initialize curr_sum as value of  
    first element and starting point as 0 */
    int curr_sum = arr[0], start = 0, i;

    /* Add elements one by one to curr_sum and  
    if the curr_sum exceeds the sum, 
    then remove starting element */
    // int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};

    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            cout << "Sum found between indexes "
                 << start << " and " << i - 1;
            return 1;
        }
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    cout << "No subarray found";
    return 0;
}

int main()
{
    // int n;
    // cin >> n;
    // vector<int> nums;
    // for (int i = 0; i < n; i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     nums.push_back(temp);
    // }
    solve({15, 2, 4, 8, 9, 5, 10, 23}, 24);
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}