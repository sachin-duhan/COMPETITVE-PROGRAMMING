#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> partitionLabels(string S)
    {
        map<char, pair<int, int>> m;
        for (int i = 0; i < S.length(); i++)
        {
            if (m.find(S[i]) != m.end())
                m[S[i]].second = i;
            else
                m[S[i]] = {i, i};
        }
        // sort(m.begin(), m.end(), [](auto &a, auto &b) { return a.second->second < b.second->second; });
        vector<int> range;
        int low = -1, high = -1;
        for (auto a : m)
        {
            if (a.second.first > high || a.second.second < low)
            {
                range.push_back(high - low + 1);
                high = a.second.second;
                low = a.second.first;
            }
            else
            {
                low = min(low, a.second.first);
                high = max(high, a.second.second);
            }
        }
        range.push_back(high - low + 1);
        range.erase(range.begin());
        for (auto a : m)
            cout << a.first << " -> " << a.second.first << " to " << a.second.second << endl;
        return range;
    }
};

int main()
{

    Solution solve;
    auto val = solve.partitionLabels("acababcbacadefegdehijhklijb");
    for (int a : val)
        cout << a << " ";
    cout << "\n";
    return 0;
}