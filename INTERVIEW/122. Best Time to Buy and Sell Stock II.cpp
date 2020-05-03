#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int profit = 0;
    bool isStock = false;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        if (prices[i] < prices[i + 1])
            profit += prices[i + 1] - prices[i];
    }
    return profit;
}

int main()
{
    vector<int> v({1, 2, 3, 4, 5});
    cout << maxProfit(v) << endl;
    return 0;
}