#include <iostream>
using namespace std;

int main()
{
    int n, w, k;
    cin >> k >> n >> w;
    long long sum = 0;
    for (int i = 1; i <= w; i++)
        sum += i * k;
    if (sum >= n)
        cout << sum - n << endl;
    else
        cout << 0 << endl;
    return 0;
}