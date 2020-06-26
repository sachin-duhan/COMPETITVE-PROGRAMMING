#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr_size;
    cin >> arr_size;
    int arr[arr_size];
    for (int i = 0; i < arr_size; ++i)
        cin >> arr[i];
    sort(arr, arr + arr_size);
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
            int ans = 0;
            for (int i = 0;i< arr_size; i++)
            {
                if (temp >= arr[i])
                    ans++;
                else
                    break;
            }
            cout << ans << endl;
        }
    }
    return 0;
}