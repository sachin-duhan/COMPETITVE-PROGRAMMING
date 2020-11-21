
#include <bits/stdc++.h>
using namespace std;

int max_quantity(vector<int> count, vector<int> weight, int bag_size)
{
    assert(count.size() == weight.size());
    vector<vector<int>> dp(count.size(), vector<int>(bag_size, 0));
    
    return dp[count.size()-1][bag_size-1];
}

int main()
{
    return 0;
}
