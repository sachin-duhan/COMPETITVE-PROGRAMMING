#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
    while (n / 10 > 0)
    {
        int sum = 0;
        while (n > 0)
        {
            int rem = n % 10;
            sum = rem * rem + sum;
            n = n / 10;
        }
        n = sum;
    }

    if (n == 1 || n == 7)
        return true;
    else
        return false;
}

int main()
{
    cout << isHappy(2) << endl;
    return 0;
}