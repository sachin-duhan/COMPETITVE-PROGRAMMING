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
    vector<pair<int, int>> vals;
    int getKth(int lo, int hi, int k)
    {
        if (lo == 1 and hi == 1 and k == 1)
        {
            return 1;
        }

        for (int i = lo; i <= hi; i++)
            get_pow(i);

        sort(vals.begin(), vals.end());

        return vals[k - 1].second;
    }

    void get_pow(int i)
    {

        int index = i;
        int count = 0;

        while (i != 1)
        {
            if (i % 2 == 0)
            {
                i = i / 2;
                count++;
            }
            else
            {
                i = (i * 3) + 1;
                count++;
            }
        }
        vals.push_back(make_pair(count, index));
    }
};

int main()
{
    Solution val;
    cout << val.getKth(12, 15, 2) << endl;
    return 0;
}