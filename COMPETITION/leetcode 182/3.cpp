#include <bits/stdc++.h>
using namespace std;

class UndergroundSystem
{
public:
    map<string, vector<pair<int, int>>> m;
    UndergroundSystem()
    {
    }

    void checkIn(int id, string stationName, int t)
    {
        m[stationName].emplace_back(make_pair(id, t));
    }

    void checkOut(int id, string stationName, int t)
    {
        m[stationName].emplace_back(make_pair(id, t));
    }

    double getAverageTime(string startStation, string endStation)
    {
        int sum = 0, count = 0;
        vector<pair<int, int>> entry = m[startStation], exit = m[endStation];
        for (auto i : entry)
            for (auto o : exit)
                if (i.first == o.first)
                {
                    sum += o.second - i.second;
                    count++;
                }
        return (sum * 1.0 / count);
    }
};

class UndergroundSystem
{
public:
    map<int, pair<string, int>> mp1;
    map<pair<string, string>, pair<int, int>> mp2;
    UndergroundSystem()
    {
        mp1 = map<int, pair<string, int>>();
        mp2 = map<pair<string, string>, pair<int, int>>();
    }

    void checkIn(int id, string stationName, int t)
    {
        mp1[id] = make_pair(stationName, t);
    }

    void checkOut(int id, string stationName, int t)
    {
        pair<string, int> p = mp1[id];
        mp1.erase(id);
        pair<string, string> q = make_pair(p.first, stationName);
        ++mp2[q].first;
        mp2[q].second += t - p.second;
    }

    double getAverageTime(string startStation, string endStation)
    {
        pair<string, string> p = make_pair(startStation, endStation);
        return (double)mp2[p].second / mp2[p].first;
    }
};
