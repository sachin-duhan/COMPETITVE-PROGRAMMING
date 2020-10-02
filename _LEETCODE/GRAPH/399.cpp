// https://leetcode.com/problems/evaluate-division/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        map<pair<string, string>, double> m;
        map<string, int> vars;
        int n = equations.size();
        for (int i = 0; i < n; i++)
        {
            string a = equations[i][0], b = equations[i][1];
            m[{a, b}] = values[i]; // {a,b} = make_pair(a.b);
            m[{b, a}] = 1 / values[i];
            vars[a]++;
            vars[b]++;
        }
        vector<double> ans;
        for (auto query : queries)
        {
            auto a = query[0], b = query[1];
            if (!vars[a] || !vars[b])
                ans.push_back(-1);
            else if (m[{a, b}])
                ans.push_back(m[{a, b}]);
            else if (m[{b, a}])
                ans.push_back(m[{b, a}]);
            else if (a == b)
                ans.push_back(1);
            else
            {
                // some graph logic should work here!!
                
            }
        }
        return ans;
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
