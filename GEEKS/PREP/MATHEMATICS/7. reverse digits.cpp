#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int temp = n, ans = 0;
    string s = to_string(n);
    int index = pow(10, s.length());
    while (temp)
    {
        ans += index * (temp % 10);
        index /= 10;
        temp /= 10;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}