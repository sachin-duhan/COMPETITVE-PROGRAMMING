#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    map<int, int> m;
    m.insert(make_pair(0, -1));
    int maxlen = 0, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
            count++;
        else
            count--;
        if (m.find(count) != m.end())
            maxlen = max(maxlen, i - m[count]);
        else
            m.insert(make_pair(count, i));
    }
    return maxlen;
}

int main()
{
    vector<int> input{0, 1, 1, 1, 0, 0};
    cout << findMaxLength(input) << endl;
    return 0;
}