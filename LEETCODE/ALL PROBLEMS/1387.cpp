#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    }

    int cal_pow(int a)
    {
        int ans = 0;
        if (a == 1)
            return ans;
        while (ans != 1)
        {
            ans++;
            if (a % 2 == 0)
                a /= 2;
            else
                a = 3 * a + 1;
        }
        return ans;
    }

    int getKth(int lo, int hi, int k)
    {
        if (lo == hi)
            return lo;
        vector<pair<int, int>> vals;
        for (int i = lo; i <= hi; i++)
        {
            if (i % 2 == 0)
                vals.push_back({cal_pow(i), i});
            else
                vals.push_back({cal_pow(i), i});
        }
        sort(vals.begin(), vals.end());
        return vals[k - 1].second;
    }
};

int main()
{
    Solution val;
    cout << val.getKth(12, 15, 2) << endl;
    return 0;
}