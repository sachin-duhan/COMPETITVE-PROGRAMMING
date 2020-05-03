#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int ans = 0;
    if (prices.size() == 0)
        return 0;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        ans += prices[i] < prices[i + 1] ? prices[i + 1] - prices[i] : 0;
    }
    return ans;
}

int main()
{
    vector<int> input({4, 2, 3, 34, 34, 3, 4, 34, 3});
    cout << maxProfit(input) << endl;
    return 0;
}