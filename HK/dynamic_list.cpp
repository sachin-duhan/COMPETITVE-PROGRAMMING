#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] = {1, 2, 3, 2, 1, 2};
    int n = 6;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i] == ar[j] && ar[j] != INT_MAX && j != i)
            {
                ans++;
                ar[i] = INT_MAX;
                ar[j] = INT_MAX;
            }
        }
    }
    cout << ans << endl;
    return 0;
}