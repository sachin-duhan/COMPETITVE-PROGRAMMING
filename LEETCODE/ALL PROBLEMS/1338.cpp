#include <bits/stdc++.h>
using namespace std;

int minSetSize(vector<int> &arr)
{
    map<int, int> m;
    for (int a : arr)
        m[a]++;
    if (m.size() == arr.size())
        return arr.size() / 2;
    int ans = 0, size = arr.size();
    sort(m.begin(), m.end(), [](auto a, auto b) {
        if (a.second != b.second)
            return a.second > b.second;
        else
            a.first > b.second
    });

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if (size < arr.size() / 2)
            break;
        else
        {
            size -= itr->second;
            ans++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << minSetSize(arr) << endl;
    return 0;
}