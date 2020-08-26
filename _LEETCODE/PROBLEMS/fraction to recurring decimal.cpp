#include <bits/stdc++.h>
using namespace std;
string fractionDecimal(int n, int d)
{
    cout << float(n/d) << " " << endl;
    return to_string(float(n / d));
}

int main()
{
    cout << fractionDecimal(1, 3) << endl;
    return 0;
}