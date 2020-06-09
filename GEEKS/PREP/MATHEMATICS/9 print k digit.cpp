#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        // action here bro<3 go fuck it
        int a, b, k;
        cin >> a >> b >> k;
        int ans = pow(a, b);
        string s = to_string(ans);
        cout << s[k] << endl;
        t--;
    }
    return 0;
}