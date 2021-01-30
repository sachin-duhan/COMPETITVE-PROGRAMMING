#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n)
{
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }

    if (sum == n && n != 1)
        return true;

    return false;
}

int main()
{
    int i;
    cin >> i;
    for (int n = 2; n < 10000; n++)
    {
        if (isPerfect(n) && n == i)
        {
            cout << i << " is a perfect number." << endl;
        }
        else if (n > i)
            break;
    }
    return 0    ;
}
