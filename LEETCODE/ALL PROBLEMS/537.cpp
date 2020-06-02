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
    int n = stoi(n1), m = stoi(n2);
    int c = stoi(c1), d = stoi(c2);
    string ans = to_string(n * m - c * d) + "+" + to_string(m * c + n * d) + "i";
    return ans;
}

int main()
{
    string s = "1+10i", t = "10+1i";
    cout <<complexNumberMultiply(s, t);
    return 0;
}