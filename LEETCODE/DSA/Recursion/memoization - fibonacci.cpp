#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &v, int N)
{
    if (v[N - 1] != INT_MIN)
        return v[N - 1];
    int ans = helper(v, N - 1) + helper(v, N - 2);
    v[N - 1] = ans;
    return ans;
}
int solve(int N)
{
    if (N == 0)
        return 0;
    if (N <= 2)
        return 1;
    vector<int> v(N, INT_MIN);
    v[0] = 1;
    v[1] = 1;
    v[2] = 2;
    return helper(v, N);
}

int main()
{
    cout << solve(20);
    return 0;
}