#include <bits/stdc++.h>
using namespace std;

pair<int, int> findPairWithDifference(const vector<int> nums, int difference)
{
    map<int, int> m;
    for (int a : nums)
        m[a]++;
    for (int a : nums)
        if (m.find(abs(difference - a)) != m.end())
            return {a, m[a]};
    return {-1, -1};
}

int main()
{
    vector<int> input{1, 2, 3, 4};
    auto ans = findPairWithDifference(input, 1);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}