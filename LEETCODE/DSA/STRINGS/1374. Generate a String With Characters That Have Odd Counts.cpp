#include <bits/stdc++.h>
using namespace std;
string generateTheString(int n)
{
    string s = "";
    if ((n & 1) == 1)
    {
        while (n--)
            s += 'a';
        return s;
    }
    else
    {
        while (--n)
            s += 'a';
        return s + 'b';
    }
}

int main()
{
    cout << generateTheString(3) << endl;
    return 0;
}