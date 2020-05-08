#include <bits/stdc++.h>
using namespace std;

int removeCoveredIntervals(vector<vector<int>> &arr)
{
    sort(arr.begin(), arr.end(), [](auto a, auto b) { return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0]; });
    for (auto a : arr)
        cout << a[0] << " " << a[1] << endl;
    int len = arr.size();
    for (int i = 0; i < arr.size() - 1; i++)
        if (arr[i][0] <= arr[i + 1][0] && arr[i][1] >= arr[i + 1][1])
        {
            arr[i + 1][1] = arr[i][1];
            arr[i + 1][0] = arr[i][0];
            len -= 1;
        }
    return len;
}

int main()
{
    vector<vector<int>> arr{{1, 4}, {1, 2}, {3, 4}};
    cout << removeCoveredIntervals(arr) << endl;
    return 0;
}