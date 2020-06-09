#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        cout << a + (n - 1) * (b - a) << endl;
    }
    return 0;
}