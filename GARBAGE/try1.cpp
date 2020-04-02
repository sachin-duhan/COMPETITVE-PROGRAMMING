#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "12A";
    // cout << int(s.substr(0, s.size() - 1));
    // cout << int(s[0]) << endl;
    // int x = int(s[0]) - 48, y = int(s[1]) - 48;
    // int a = 10 * x + y;
    // cout << a + 1 << endl;
    // pair<pair<int, int>, pair<int, int>> cord;
    // make_pair(make_pair(2, 2), make_pair(1, 2));
    // cout << cord.first.second << endl;
    // string s = "ab", b = "ab";
    map<int, int> m;
    m[0] = 1;
    for (int i = 0; i < 10; i++)
        m[i]++;
    for (auto itr : m)
        cout << itr.first << " " << itr.second << endl;
    
    return 0;
}