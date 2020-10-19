
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        map<int, int> nextDayHappen;
        map<int, int> lastDayHappen;
        for (int i = 0; i < rains.size(); i++)
        {
            if (rains[i] > 0)
            {
                if (lastDayHappen[rains[i]])
                {
                    nextDayHappen[lastDayHappen[rains[i]]] = i + 1;
                }
                lastDayHappen[rains[i]] = i + 1; // The day number begins from 1.
            }
        }
        priority_queue<int, vector<int>, greater<int>> emergencyQue;
        map<int, int> currWater;
        vector<int> res;
        for (int i = 0; i < rains.size(); i++)
        {
            if (rains[i] > 0)
            {
                if (currWater[rains[i]])
                {
                    // we fail
                    return vector<int>();
                }
                currWater[rains[i]]++;
                res.push_back(-1);
                if (nextDayHappen[i + 1])
                    emergencyQue.push(nextDayHappen[i + 1]);
            }
            else
            {
                if (emergencyQue.size())
                {
                    res.push_back(rains[emergencyQue.top() - 1]);
                    currWater[rains[emergencyQue.top() - 1]] = 0;
                    emergencyQue.pop();
                }
                else
                {
                    res.push_back(1);
                }
            }
        }
        return res;
    }
};