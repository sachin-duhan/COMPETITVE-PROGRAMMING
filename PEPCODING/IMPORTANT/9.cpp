#include <bits/stdc++.h>
using namespace std;

int waterHoldingCapacity(vector<int> bricks)
{
    int n = bricks.size(), ans = 0;
    if (n < 2)
        return 0;
    for (size_t i = 1; i < n; i++)
        if (bricks[i] > bricks[i - 1])
            ans += bricks[i] - bricks[i - 1];
    return ans;
}

int main()
{
    cout << waterHoldingCapacity({2,0,2}) << endl;
    return 0;
}