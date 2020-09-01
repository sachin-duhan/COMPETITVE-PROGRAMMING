#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int i = n / 3, j = n - 2, ans = 0;
        while (i--)
        {
            ans += piles[j];
            j -= 2;
        }
        return ans;
    }
};

