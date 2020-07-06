#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> handleExtremeCase(int size)
    {
        vector<int> ans(size + 1, 0);
        ans[0] = 1;
        return ans;
    }

    vector<int> plusOne(vector<int> &digits)
    {
        int i = digits.size() - 1;
        while (i >= 0)
        {
            digits[i]++;
            digits[i] %= 10;
            if (i == 0 && digits[i] == 0)
                return handleExtremeCase(digits.size());
            if (digits[i] != 0)
                break;
            i--;
        }
        return digits;
    }
};
