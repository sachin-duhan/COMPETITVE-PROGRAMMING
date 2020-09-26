#include <bits/stdc++.h>
using namespace std;

// sub of the factor with some given conditions!
int main()
{
    int n;
    cin >> n;
    vector<int> factors;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            factors.push_back(i);
    }
    cout << accumulate(factors.begin(), factors.end(), 0) << endl;
        return 0;
}