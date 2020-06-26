#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr_size;
    cin >> arr_size;
    vector<int> arr(arr_size, 0);
    for (int i = 0; i < arr_size; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int t;
    cin >> t;
    // cout << "-------------------" << endl;
    while (t--)
    {
        int temp;
        cin >> temp;
        if (temp < arr[0])
            cout << 0 << endl;
        else if (temp >= arr[arr_size - 1])
            cout << arr_size << endl;
        else
        {
            auto itr = upper_bound(arr.begin(), arr.end(), temp) - arr.begin();
            cout << itr << endl;
        }
    }
    return 0;
}