#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    string longestDiverseString(int a, int b, int c)
    {
        int p[3];
        p[0] = a;
        p[1] = b;
        p[2] = c;
        string ans;
        int last = -1;
        while (true)
        {
            int mx = 0, which = -1;
            for (int i = 0; i < 3; ++i)
            {
                if (i != last && p[i] > mx)
                {
                    mx = p[i];
                    which = i;
                }
            }
            if (which == -1)
            {
                break;
            }

            int mxprev = max(p[0], max(p[1], p[2]));
            p[which] -= 2;
            int mxsuff = max(p[0], max(p[1], p[2]));
            p[which] += 2;
            if (mxprev - 2 == mxsuff)
            {
                ans += char(which + 97);
                ans += char(which + 97);
                p[which] -= 2;
            }
            else
            {
                ans += char(which + 97);
                --p[which];
            }
            last = which;
        }
        return ans;
    }
};
