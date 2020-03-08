#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c)
{
    if (c.size() < 2)
        return 1;
    int res = 0;
    int i = 0;
    while (i < c.size())
    {
        if (i < c.size() && c[i + 2] == 0)
            i += 2;
        else
            i++;
        res++;
    }
    return res - 1;
}

int main()
{
    vector<int> v = {0, 1, 0, 0, 1, 0, 0, 0};
    cout << jumpingOnClouds(v) << endl;
    return 0;
}
