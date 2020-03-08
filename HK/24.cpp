#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "11:12:54PM";
    int len = s.length();
    string a = s.substr(len - 2, 2);
    if (a[0] == 'P')
    {
        
        cout << s.substr(0, 2)[0] + s.substr(0, 2)[1] - 87 << endl;
    }
    else
        cout << s.substr(0, len - 2) << endl;
    return 0;
}