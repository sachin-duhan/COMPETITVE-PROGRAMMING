#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int> &arr)
{
    map<int, int> m;
    for (int a : arr)
        m[a]++;
    int ans = 0;
    set<int> ar(arr.begin(), arr.end());
    for (int a : ar)
    {
        if (m.find(a + 1) != m.end())
            ans += m[a];
    }
    return ans;
}

int main()
{
    vector<int> input{1, 1, 1, 2, 2, 2};
    cout << countElements(input) << endl;
    return 0;
}