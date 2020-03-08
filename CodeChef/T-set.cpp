#include <bits/stdc++.h>
#define loop(i, a, n) for (auto i = a; i < n; i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int n;
        cin >> n;
        unordered_map<string, bool> m;
        int ans = 0;
        for (auto i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            bool val;
            cin >> val;
            if (m.find(s) == m.end())
            {
                m.insert(make_pair(s, val));
                ans++;
            }
            else
            {
                if (m.find(s)->second == val)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}