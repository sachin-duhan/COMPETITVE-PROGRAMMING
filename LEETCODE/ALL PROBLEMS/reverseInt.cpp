#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int ans = 0, i = 1;
    stack<int> s;
    while (val)
    {
        s.push(val % 10);
        val /= 10;
    }

    while (!s.empty())
    {
        ans += i * s.top();
        s.pop();
        i *= 10;
    }
    cout << ans << endl;
    return 0;
}