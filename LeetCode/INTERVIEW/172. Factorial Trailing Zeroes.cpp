#include <bits/stdc++.h>
using namespace std;

double factorial(int n)
{
    int ans = 1;
    if (n < 1)
        return ans;
    else
        for (int i = 2; i <= n; i++)
            ans *= i;
    return ans;
}

int trailingZeroes(int n)
{
    int fact = factorial(n);
    int ans = 0;
    while (fact)
    {
        if (fact % 10 == 0)
        {
            ans++;
            fact /= 10;
        }
        else
            break;
    }
    return ans;
}

int BetterSolution(int n)
{
    int ret = 0;
    while (n)
    {
        ret += n / 5;
        n /= 5;
    }
    return ret;
}


int main()
{
    int n = 10;
    cout << trailingZeroes(n) << endl;
    cout << BetterSolution(n) << endl;
    return 0;
}