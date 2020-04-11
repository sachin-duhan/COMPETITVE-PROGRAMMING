#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> groupThePeople(vector<int> &groupSizes)
{
    multimap<int, vector<int>> m;
    for (int i = 0; i < groupSizes.size(); i++)
    {
        auto itr = m.find(groupSizes[i]);
        if (itr != m.end())
        {
            bool flag = false;
            while (itr->first == groupSizes[i] && itr != m.end())
            {
                if (itr->second.size() < groupSizes[i])
                {
                    itr->second.push_back(i);
                    flag = true;
                    break;
                }
                itr++;
            }
            if(!flag) m.insert(make_pair(groupSizes[i], vector<int>{i}));
        }
        else m.insert(make_pair(groupSizes[i], vector<int>{i}));
    }

    vector<vector<int>> ans;
    for (auto arr : m)
        ans.push_back(arr.second);
    return ans;
}

int main()
{
    vector<int> v{1,1,1,1,1,1,1};
    vector<vector<int>> ans = groupThePeople(v);
    for (auto arr : ans)
    {
        for (auto val : arr)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}