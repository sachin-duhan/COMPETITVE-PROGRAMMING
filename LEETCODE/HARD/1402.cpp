#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> satisfaction)
{
    sort(satisfaction.begin(), satisfaction.end());
    int ans = 0;
    for (int i = 1; i <= satisfaction.size(); i++)
        ans += i * satisfaction[i - 1];
    // cout << ans << endl;
    for (int i = 1; i <= satisfaction.size(); i++)
    {
        int temp = 0;
        for (int j = i; j <= satisfaction.size(); j++)
            temp += (j-i+1) * satisfaction[j-1];
        ans = max(temp, ans);
    }
    return ans > 0 ? ans : 0;
}

int main()
{
    vector<int> v{-1, -8, 0, 5, -7};
    cout << solve(v) << endl;
    return 0;
}