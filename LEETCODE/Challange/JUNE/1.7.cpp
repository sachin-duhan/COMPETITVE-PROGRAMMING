#include <bits/stdc++.h>
using namespace std;

class RecurrSolution
{
private:
    int ans;
    void helper(int amount, int curr, vector<int> coins, int i)
    {
        if (amount > curr || i > coins.size() - 1)
            return;
        if (amount = curr)
        {
            ans++;
            // helper(amount, 0, coins, i + 1);
            return;
        }
        if (curr + coins[i] <= amount)
            helper(amount, curr + coins[i], coins, i);
        helper(amount, curr + coins[i], coins, i + 1);
    }

public:
    int change(int amount, vector<int> &coins)
    {
        if (coins.size() == 1)
        {
            if (coins[0] == amount)
                return 1;
            return 0;
        }
        ans = 0;
        for (int i = 0; i < coins.size(); i++)
            helper(amount, 0, coins, i);
        return ans;
    }
};

int main()
{
    int amount = 0;
    return 0;
}