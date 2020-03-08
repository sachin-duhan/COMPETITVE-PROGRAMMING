#include <iostream>
#include <vector>
using namespace std;
vector<int> fib;
int complete = 2;

void fibonacci(int n)
{
    fib[0] = 0;
    fib[1] = 1;
    complete = max(complete, n);
    if (n < complete)
        return;
    for (int i = complete; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}

void solve()
{
    int n;
    cin >> n;
    fibonacci(n);
    vector<int> v1;
    for (int i = 0; i < n; i++)
        v1[i] = fib[i] % 10;

    // erasing the items from the v1
    bool odd = false;
    while (v1.size() > 1)
    {
        if (odd)
        {
            
        }
        else
        {
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}