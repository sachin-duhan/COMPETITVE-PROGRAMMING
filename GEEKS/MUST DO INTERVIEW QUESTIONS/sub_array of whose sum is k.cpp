#include <bits/stdc++.h>
using namespace std;

// sliding window approach!
void solve()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start = -1, end = -1, curr_sum = 0, i = 0, j = 0;
    while (j < n && i <= j)
    {
        if (curr_sum == target)
            if (end - start > j - i)
            {
                start = i;
                end = j;
            }

        if (curr_sum + arr[j] > target) // recuding the window size!!
        {
            curr_sum -= arr[i];
            i++;
        }
        else
        { // expanding the window size!!
            curr_sum += arr[j];
            j++;
        }
    }
    if (start == -1)
        cout << start << endl;
    else
        cout << start << " " << end << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}