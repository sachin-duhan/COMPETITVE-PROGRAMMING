#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        // n = abs(n);
        if (n == 1)
            return true;
        if (n % 2 != 0 || n < 0)
            return false;
        int c = sqrt(n) + 1;
        for (int i = c; i > 0; i--)
        {
            if (pow(2, i) < n)
                break;
            if (pow(2, i) == n)
                return true;
        }
        return false;
    }
};

int main()
{
    int val = 256;
    Solution sol;
    cout << sol.isPowerOfTwo(val) << endl;
    return 0;
}