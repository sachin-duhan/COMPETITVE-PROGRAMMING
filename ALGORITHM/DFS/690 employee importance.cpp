#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};

class Solution
{
private:
    map<int, Employee*> m;
    int ans;
    void dfs(vector<Employee *> e, int id)
    {
        if (m.find(id) == m.end())
            return;
        ans += m[id]->importance;
        for (auto a : m[id]->subordinates)
            dfs(e, a);
    }

public:
    int getImportance(vector<Employee *> employees, int id)
    {
        for (auto e : employees)
            m.insert(make_pair(e->id, e));
        ans = 0;
        dfs(employees, id);
        return ans;
    }
};