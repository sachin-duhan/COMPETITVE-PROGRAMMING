#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    // cout << "====    =======" << endl;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << "0" << endl;
        else
            cout << b - (a % b) << endl;
    }
    return 0;
}