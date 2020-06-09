#include <math.h>
#include <iostream>
using namespace std;

string solve(int n)
{
    int val = 0, temp = n;
    while (temp)
    {
        int t = temp % 10;
        val += pow(t, 3);
        temp /= 10;
    }
    return n == val ? "Yes" : "No";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}