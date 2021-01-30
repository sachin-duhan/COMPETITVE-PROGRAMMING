
#include <bits/stdc++.h>
using namespace std;

int n_th_fibbonacci_number(int n)
{
    assert(n >= 2);
    int l = 0, sl = 1;
    for (int i = 0; i < n; i++)
    {
        int number = l + sl;
        sl = l;
        l = number;
    }
    return sl + l;
}

int main()
{
    int n;
    cin >> n;
    cout << n_th_fibbonacci_number(n) << endl;
    return 0;
}
