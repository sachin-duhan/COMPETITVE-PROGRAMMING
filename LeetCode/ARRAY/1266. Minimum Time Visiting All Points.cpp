#include<iostream>
#include<vector>
using namespace std;

int minDist(vector<int> &v1, std::vector<int> &v2)
{
    int r = 0;
    int dx = abs(v2[0] - v1[0]);
    int dy = abs(v2[1] - v1[1]);
    return std::max(dx, dy);
}

int minTimeToVisitAllPoints(vector<vector<int>> &points)
{
    int d = 0;
    for (int i = 0; i < points.size() - 1; i++)
    {
        d += minDist(points[i + 1], points[i]);
    }
    return d;
}