#include <bits/stdc++.h>
using namespace std;

double mean(vector<int> nums)
{
    auto sum = accumulate(nums.begin(), nums.end(), 0);
    return sum / nums.size();
}

vector<vector<int>> meanGroups(vector<vector<int>> a)
{
    unordered_map<double, int> m;
    vector<vector<int>> ans;
    int index = 0;
    for (int i = 0; i < a.size(); i++)
    {
        auto _mean = mean(a[i]);
        if (m.find(_mean) != m.end())
        {
            int j = m[_mean];
            ans[j].push_back(i);
        }
        else
        {
            m[_mean] = index++;
            ans.push_back({i});
        }
    }
    return ans;
}

int main()
{

    return 0;
}