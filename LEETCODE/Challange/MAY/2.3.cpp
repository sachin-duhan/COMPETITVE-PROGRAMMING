#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findJudge(int N, vector<vector<int>> &trust)
    {
        vector<bool> t(N, true);
        for (auto a : trust)
            t[a[0] - 1] = false;
        int judge = -1;
        for (int i = 0; i < N; i++)
            if (t[i])
                judge = i + 1;
        if (judge == -1)
            return -1;
        int count = 0;
        for (auto a : trust)
            if (a[1] == judge)
                count++;
        if (count == N - 1)
            return judge;
        return -1;
    }
};