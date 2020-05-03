#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int temp = x, size = 0;
    while (temp)
    {
        temp /= 10;
        size++;
    }
    temp = x;
    int s = size;
    int ans = pow(10, size);
    while (temp)
    {
        ans += (temp % 10) * pow(10, size--);
        temp /= 10;
    }
    ans -= pow(10, s);
    ans /= 10;
    return ans;
}

int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
            return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}

int main()
{
    int value = -232;
    cout << (value < 0) << endl;
    cout << reverse(value) << endl;
    return 0;
}