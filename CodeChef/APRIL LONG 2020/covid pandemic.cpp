// solution accepted!
#include <iostream>
using namespace std;

bool solve()
{
    int n;
    cin >> n;
    bool passed = true, is_last_one = false;
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 1 && passed)
        {
            if (is_last_one && (i - last < 6))
                passed = false;
            else
            {
                last = i;
                is_last_one = true;
            }
        }
    }
    return passed;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool ans = solve();
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}