
#include <bits/stdc++.h>
using namespace std;

int coin_change(vector<int> coins, int target)
{

    int n = target;
    if (!coins.size())
        return 0;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (auto coin : coins)
    {
        for (int i = coin; i <= n; i++)
            dp[i] += dp[i - coin];
    }
    return dp[n];
}

int main()
{
    cout << coin_change({2, 3, 5}, 7) << endl;
    return 0;
}
