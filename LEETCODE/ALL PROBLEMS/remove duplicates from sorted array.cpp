#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    vector<int> input{1, 1, 2, 2, 2, 4, 5, 6, 7};
    for (int i = 1; i < input.size(); i++)
        if (input[i] != input[i - 1])
            ans++;
    cout << ans << endl;
    return 0;
}