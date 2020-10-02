// https://leetcode.com/problems/evaluate-division/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<string, unordered_map<string, double>> mp;
    unordered_set<string> visited;

    double dfs(string src, string dst, double p)
    {
        if (mp.find(src) == mp.end() or mp.find(dst) == mp.end())
            return -1;
        if (src == dst)
            return p;
        double k = -1;
        visited.insert(src);
        for (auto x : mp[src])
        {
            if (visited.find(x.first) == visited.end())
                k = dfs(x.first, dst, p * x.second);
            if (k != -1)
                return k;
        }
        return -1.0;
    }

    vector<double> calcEquation(vector<vector<string>> &eq, vector<double> &val, vector<vector<string>> &q)
    {
        vector<double> res;
        for (int i = 0; i < eq.size(); i++)
        {
            mp[eq[i][0]][eq[i][1]] = val[i];
            mp[eq[i][1]][eq[i][0]] = 1 / val[i];
        }
        for (int i = 0; i < q.size(); i++)
        {
            visited.clear();
            double k = dfs(q[i][0], q[i][1], 1.0);
            res.push_back(k);
        }
        return res;
    }
};

int main()
{
    vector<vector<string>> equations = {{"a", "b"}, {"b", "c"}}, queries = {{"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"}};
    vector<double> values = {2.0, 3.0};
    Solution solve;
    auto ans = solve.calcEquation(equations, values, queries);
    for (auto a : ans)
        cout << a << endl;
    return 0;
}
