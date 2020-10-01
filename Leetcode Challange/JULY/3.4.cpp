#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkReq(vector<int> &reqs, vector<bool> &cells)
    {
        for (auto n : reqs)
            if (!cells[n])
                return false;
        return true;
    }
    vector<int> findOrder(int nc, vector<vector<int>> &ps)
    {
        vector<int> res;
        unordered_map<int, vector<int>> paths;
        unordered_map<int, vector<int>> reqs;
        queue<int> layer;
        vector<bool> cells(nc, true);
        for (auto p : ps)
        {
            paths[p[1]].push_back(p[0]);
            reqs[p[0]].push_back(p[1]);
            cells[p[0]] = false;
        }
        for (int i = 0; i < cells.size(); i++)
        {
            if (cells[i])
            {
                layer.push(i);
                cells[i] = false;
            }
        }
        int len = layer.size(), currCourse;
        bool progressed = true;
        while (progressed && layer.size())
        {
            progressed = false;
            for (int i = 0; i < len; i++)
            {
                currCourse = layer.front();
                layer.pop();
                if (!cells[currCourse])
                {
                    if (checkReq(reqs[currCourse], cells))
                    {
                        progressed = true;
                        res.push_back(currCourse);
                        cells[currCourse] = true;
                        for (auto path : paths[currCourse])
                            layer.push(path);
                    }
                    else
                    {
                        layer.push(currCourse);
                    }
                }
            }
            len = layer.size();
        }
        return res.size() == nc ? res : vector<int>();
    }
};