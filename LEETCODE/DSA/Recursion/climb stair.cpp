#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    if (n <= 2)
        return n;
    int arr[n];
    arr[0] = 1;
    arr[1] = 2;
    for (int i = 2; i < n; i++)
        arr[i] = arr[i - 2] + arr[i - 1];
    return arr[n - 1];
}

// int solve_using_stl(int n)
// {
//     vector<int> v(n, 1);
//     int i = 0, j = 1;
//     transform(v.begin() + 2, v.end(), v.begin() + 2, [](vector<int>::iterator &a) {
//         // int val = a--;

//     });
//     return v[n - 1];
// }

int main()
{
    cout << climbStairs(12) << endl;
    // cout << solve_using_stl(12) << endl;
    return 0;
}