#include <bits/stdc++.h>
using namespace std;

int input()
{
    int n;
    cin >> n;
    return n;
}

void solve()
{
    const int n = input(), sum = input();
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = input();
    int start = -1, end = -1;
    for (int i = 0; i < n; i++)
    {
        int s = arr[i];
        if (s < sum)
        {
            int j = i + 1;
            while (s <= sum && j < n)
            {
                s += arr[j];
                if (s == sum && end - start < j - i)
                {
                    start = i;
                    end = j;
                }
                j++;
            }
        }
        else
            start = end = i;
    }
    if (start == -1)
        cout << -1 << endl;
    else
        cout << start + 1 << " " << end + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}