#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    int count = 0;
    long long total_car_price = 0;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        total_car_price += temp;
        if (temp > 0)
            count++;
    }
    int depreciate = 0;
    for (int i = 0; i < count; i++)
        depreciate += i;
    cout << (total_car_price-depreciate) % 1000000007 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}