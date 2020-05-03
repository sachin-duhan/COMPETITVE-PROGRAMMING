#include <iostream>
#include <math.h>
using namespace std;

int titleToNumber(string s)
{
    #define ll long long
    ll res = 0;

    for (int i = 0; i < s.length(); i++)
    {
        res += (s[i] - 'A' + 1) * pow(26, (s.length() - i - 1));
    }
    return res;
}

int main()
{
    string s = "AB";
    cout << titleToNumber(s);
    return 0;
}