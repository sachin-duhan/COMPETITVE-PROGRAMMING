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
        double a, b, n;
        cin >> a >> b >> n;
        cout << a * pow((b / a), n - 1) << endl;
        t--;
    }
    return 0;
}