#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        bool is_done = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                is_done = true;
                i++;
            }
        }
        if(!is_done) break;
    }
    cout << s << endl;
    return 0;
}