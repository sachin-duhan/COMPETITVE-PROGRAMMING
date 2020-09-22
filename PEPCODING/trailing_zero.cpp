#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int solve(int n)
    {
        int count = 0;
        for (int i = 5; n / i >= 1; i *= 5)
            count++;
        return count;
    }
};

int main()
{
    Solution solve;
    cout << solve.solve(18);
    return 0;
}