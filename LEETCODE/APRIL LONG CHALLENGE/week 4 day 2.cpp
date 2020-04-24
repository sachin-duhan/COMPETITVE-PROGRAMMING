#include <bits/stdc++.h>
using namespace std;
int solve(int m, int n)
{
    int ans = 0;
    for (int bit = 30; bit >= 0; bit--)
    {
        if ((m & (1 << bit)) != (n & (1 << bit)))
            break;
        else
            ans += (m & (1 << bit));
    }
    return ans;
}
int main()
{
    cout << solve(2, 3);
    return 0;
}