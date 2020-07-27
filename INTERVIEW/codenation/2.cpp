#include <bits/stdc++.h>
using namespace std;
typedef int long long

bool solve(int n, int x)
{
    if (n == 1)
        return true;
    if (x == 0)
        return false;
    int matches = (n * (n - 1)) / 2;
    int total_time = x * 60;
    if (matches * 30 <= total_time)
        return true;
    return false;
}

int main()
{
    int n, x;
    cin >> n >> x;
    bool done = solve(n, x);
    if (done)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}