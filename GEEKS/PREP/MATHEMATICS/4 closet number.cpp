#include <bits/stdc++.h>
using namespace std;

int closest_number(int n, int d)
{
    int mod = n % d;
    if ((n + mod) % d == 0 && (n - mod) % d == 0)
        return max(abs((n + mod)), abs((n - mod)));
    if ((n + mod) % d == 0)
        return (n + mod);
    if ((n - mod) % d == 0)
        return (n - mod);
    return -1;
}

int main()
{
    int t = 1;
    cout << closest_number(13, 6) << endl;
    return 0;
}