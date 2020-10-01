#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestTimeFromDigits(vector<int> &a)
    {
        string ans = "";
        int mx = -1, h1 = -1, h2 = -1, m1 = -1, m2 = -1;

        for (int i = 0; i < 4; ++i)
        {
            if (a[i] > 2)
                continue;

            for (int j = 0; j < 4; ++j)
            {
                if (j == i)
                    continue;
                if (a[i] == 2 && a[j] > 3)
                    continue;

                for (int k = 0; k < 4; ++k)
                {
                    if (k == j || k == i)
                        continue;
                    if (a[k] > 5)
                        continue;

                    for (int l = 0; l < 4; ++l)
                    {
                        if (l == k || l == j || l == i)
                            continue;

                        int val = (a[l] + (a[k] * 10)) + (a[j] + (a[i] * 10)) * 60; // value of time in minutes.

                        if (mx < val)
                        {
                            mx = val;
                            h1 = a[i], h2 = a[j], m1 = a[k], m2 = a[l];
                        }
                    }
                }
            }
        }

        if (h1 == -1 || h2 == -1 || m1 == -1 || m2 == -1)
            return "";

        ans = to_string(h1) + to_string(h2) + ":" + to_string(m1) + to_string(m2);

        return ans;
    }
};