#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int coin_change_permutation(vector<int> coins, int target)
{
    if (!coins.empty())
        return 0;
    vector<int> dp(target + 1, 0);
    vector<vector<string>> options(target + 1);
    dp[0] = 1;
    options[0].push_back("");

    for (auto coin : coins)
    {
        for (int i = coin; i < target + 1; i++)
        {
            if (dp[i - coin] != 0)
            {
                dp[i] += dp[i - coin];
                int last = options[i - coin].size();
                auto str = options[i - coin][last - 1];
                options[i].push_back(str + to_string(i));
            }
        }
    }

    long long ans = 0;
    for (auto str : options[target])
        ans += (str.length() > 0) ? factorial(str.length()) : 0;
    return ans;
}

int main()
{
    cout << coin_change_permutation({2, 3, 5}, 7) << endl;
    return 0;
}
