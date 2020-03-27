#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    if (n <= 2)
        return 0;
    bool prime[n];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p < n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i < n; i += p)
                prime[i] = false;
        }
    }
    int ans = 0;
    for (int p = 2; p < n; p++)
        if (prime[p])
            ans++;

    return ans;
}

int main()
{
    int n = 10;
    cout << countPrimes(n) << endl;
    return 0;
}

/*

Count the number of prime numbers less than a non-negative number, n.

Example:

Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

*/