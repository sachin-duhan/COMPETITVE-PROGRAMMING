#include <bits/stdc++.h>
using namespace std;
vector<int> sumZero(int n)
{
    vector<int> ans(n, 0);
    int start = 0, end = n - 1, val = 1;
    while (start < end)
    {
        ans[start++] -= val;
        ans[end--] += val;
        val++;
    }
    return ans;
}
int main()
{
    vector<int> ans = sumZero(10);
    for (auto el : ans)
        cout << el << " ";
    return 0;
}
