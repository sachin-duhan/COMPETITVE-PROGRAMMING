#include <bits/stdc++.h>
using namespace std;

string complexNumberMultiply(string a, string b)
{
    string n1, n2, c1, c2;
    int i = 0;
    while (a[i] != '+')
        n1 += a[i++];
    c1 = a.substr(i + 1, a.size() - i - 2);
    i = 0;
    while (b[i] != '+')
        n2 += b[i++];
    c2 = b.substr(i + 1, b.size() - i - 2);
    
    cout << n1 << " " << n2 << endl;
    cout << c1 << " " << c2 << endl;
    return "";
}

int main()
{
    string s = "-10+-100i";
    complexNumberMultiply(s, s);
    return 0;
}