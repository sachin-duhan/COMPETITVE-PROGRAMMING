#include <iostream>
using namespace std;

int main()
{
    int n, w, k;
    cin >> k >> n >> w;
    long long sum = 0;
    for (int i = 1; i <= w; i++)
        sum += i * k;
    cout << abs(n - sum) << endl;
    return 0;
}