#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (auto i = a; i < n; i++)

void solve()
{
    string s;
    cin >> s;
    int jump_a, jump_b, i, j;
    cin >> jump_a >> jump_b;
    loop(k, 0, s.size())
    {
        if (s[k] == 'A')
            i = k;
        if (s[k] == 'B')
            j = k;
    }
    bool collide = false;
    while (true)
    {
        if (i == j && i < s.size() && j > 0)
        {
            collide = true;
            break;
        }
        else if (i >= s.size() || j <= 0 || (i < j && i != j))
            break;

        i += jump_a;
        j -= jump_b;
    }
    
    if(collide)cout << "unsafe" << endl;
    else cout << "safe" << endl;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
        solve();
    return 0;
}