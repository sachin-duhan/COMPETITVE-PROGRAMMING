#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (auto i = a; i < n; i++)
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        float s, a, b, c;
        cin >> s >> a >> b >> c;
        cout << ceil((a + b + c) / s) << endl;
    }
    return 0;
}