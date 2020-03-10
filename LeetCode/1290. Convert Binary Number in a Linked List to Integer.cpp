#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    vector<int> v({1, 0, 1});
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans += pow(2, i) * v[v.size() - 1 - i];
    }
    cout << ans << endl;
    return 0;
}