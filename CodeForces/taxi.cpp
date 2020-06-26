#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> groups(4, 0);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        groups[temp - 1] += temp;
    }
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans += groups[i] / 4;
        groups[i] %= 4;
        if (i == 0 && groups[i] == 3)
        {
            groups[1] += 2;
            groups[2]++;
        } else if (i >= 1 && groups[i] > 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}