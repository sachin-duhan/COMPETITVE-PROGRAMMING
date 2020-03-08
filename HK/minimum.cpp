#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    long long ans = 0;
    int last = 0;
    int sign = 1;

    for (int i = 0; i < s.length(); ++i)
    {
        char c = s[i];
        if (c == '+' || c == '-')
        {
            ans += sign * last;
            last = 0;
            if (c == '+')
            {
                sign = 1;
            }
            else
            {
                sign = -1;
            }
        }
        else
        {
            last = 10 * last + (c - '0');
        }
    }

    ans += sign * last;
    cout << ans << '\n';

    return 0;
}
