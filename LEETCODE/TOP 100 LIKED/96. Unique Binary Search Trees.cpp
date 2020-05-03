#include <bits/stdc++.h>
using namespace std;

unsigned long int binomialCoeff(unsigned int n, unsigned int k)
{
    unsigned long int res = 1;

    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

unsigned long int numTrees(unsigned int n)
{
    unsigned long int c = binomialCoeff(2 * n, n);
    return c / (n + 1);
}

class Solution
{
public:
    map<int, int> m;
    void solve(int n)
    {
        int sol = 0;
        for (int i = 1; i <= n; i++)
        {
            sol += (m[i - 1] * m[n - i]);
        }
        m[n] = sol;
    }
    int numTrees(int n)
    {

        m[0] = 1, m[1] = 1, m[2] = 2, m[3] = 5;

        if (n == 0 || n == 1 || n == 2 || n == 3)
            return m[n];
        for (int i = 4; i <= n; i++)
        {
            solve(i);
        }
        return m[n];
    }
};

int main()
{
    int n = 4, count1 = numTrees(n);
    cout << count1 << endl;
    Solution x;
    cout << x.numTrees(n) << endl;
    return 0;
}
