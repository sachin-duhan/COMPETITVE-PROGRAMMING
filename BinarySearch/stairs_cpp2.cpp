#include <bits/stdc++.h>
using namespace std;

int solve(int steps[], int n)
{
    if (n == 0)
        return 0;

    int dp[n + 1];
    memset(dp, INT_MAX, n);
    dp[n] = 0;

    for (int i = n; i >= 0; i--)
    {
        if(steps[i] == 0) continue;
        int curr_steps_allowed = steps[i], _min = INT_MAX;
        for (int j = 1; j <= curr_steps_allowed; j++)
            _min = min(_min, steps[i+j]);
        dp[i] = _min+1;
    }

    if (dp[0] == INT_MAX)
        return -1;
    return dp[0];
}

int main()
{
    int steps[] = {15, 2, 4, 8, 9, 5, 10, 23};
    cout << solve(steps, sizeof(steps) / sizeof(steps[0])) << endl;
    return 0;
}
