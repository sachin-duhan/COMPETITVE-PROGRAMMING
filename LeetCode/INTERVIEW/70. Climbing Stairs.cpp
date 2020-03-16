#include <vector>
#include <iostream>
using namespace std;
int solve(int n)
{
    if (n < 2)
        return n;
    vector<int> dp;
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n - 1];
}
int main()
{
    int n = 2;
    cout << solve(n);
    return 0;
}