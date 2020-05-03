#include<vector>
class Solution
{
public:
    int len(int num)
    {
        int ans = 0;
        if (num < 10)
            ans++;
        if (num < 100)
            ans++;
        if (num < 1000)
            ans++;
        if (num < 10000)
            ans++;
        if (num < 100000)
            ans++;
        if (num == 100000)
            ans++;
        return ans;
    }
    int findNumbers(std::vector<int> &nums)
    {
        int ans = 0;
        for (int a : nums)
            if (len(a) % 2 == 0)
                ans++;
        return ans;
    }
};