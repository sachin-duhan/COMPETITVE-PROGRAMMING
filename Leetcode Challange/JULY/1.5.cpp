#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<int> to_binary(int a)
    {
        vector<int> result(32);
        int i = 0;
        while (a > 0)
        {
            result[i] = (a % 2);
            a /= 2;
            i++;
        }
        reverse(result.begin(), result.end());
        return result;
    }

public:
    int hammingDistance(int a, int b)
    {
        int ans = 0;
        vector<int> ba = to_binary(a), bb = to_binary(b);
        for (int i = 0; i < 32; i++)
            if(ba[i] != bb[i])ans++;
        return ans;
    }
};

int main()
{
    Solution solved;
    cout << solved.hammingDistance(1, 2) << endl;
    return 0;
}