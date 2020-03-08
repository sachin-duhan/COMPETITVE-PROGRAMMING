#include <bits/stdc++.h>
#define loop(i, a, n) for (auto i = a; i < n; i++)
using namespace std;

int input()
{
    int b;
    cin >> b;
    return b;
}

void solve()
{
    int n = input();
    string s;
    cin >> s;
    int maxi = INT_MIN;
    loop(i, 0, n)
    {
        int match_len = 0;
        loop(j, i+1, n)
        {
            int m = i, k = j;
            if (s[m++] != s[k++])
                break;
            match_len++;
        }
        maxi = max(match_len, maxi);
    }
    cout << maxi << endl;
}

int main()
{
    int t = input();
    while (t--)
        solve();
    return 0;
}