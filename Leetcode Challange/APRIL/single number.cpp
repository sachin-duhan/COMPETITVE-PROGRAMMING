#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    map<int, int> m;
    for (auto val : nums)
        m[val]++;
    int ans = 0;
    for (auto itr : m)
    {
        if (itr.second == 1)
        {
            ans = itr.first;
        }
    }
    return ans;
}
int main()
{
    vector<int> input{1,2,3,4,5,6};
    cout << singleNumber(input);
    return 0;
}