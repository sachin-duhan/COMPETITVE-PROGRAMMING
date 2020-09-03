#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        int target = graph.size() - 1;
        queue<vector<int>> q;
        vector<vector<int>> res;
        q.push({0});

        while (!q.empty())
        {
            vector<int> temp;
            while (true)
            {
                temp = q.front();
                int n = temp.size();
                if (n && temp[n - 1] == target)
                {
                    res.push_back(temp);
                    q.pop();
                }
                else
                    break;
            }

            if (q.empty())
                break;
            temp = q.front();
            q.pop();
            int index = temp[temp.size() - 1];
            for (int i = 0; i < graph[index].size(); i++)
            {
                temp.push_back(graph[index][i]);
                q.push(temp);
                temp.pop_back();
            }
        }
        return res;
    }
};