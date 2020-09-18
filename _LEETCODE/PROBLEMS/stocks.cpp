#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minValue = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            minValue = min(minValue, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minValue);
        }
        return maxProfit;
    }
};

int main(){
    return 0;
}
