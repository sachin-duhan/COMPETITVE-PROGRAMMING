/*
On a plane there are n points with integer coordinates points[i] = [xi, yi]. 
Your task is to find the minimum time in seconds to visit all points.

You can move according to the next rules:

In one second always you can either move vertically, horizontally by one unit or diagonally (it means to move one unit vertically and one unit horizontally in one second).
You have to visit the points in the same order as they appear in the array.
*/

#include <iostream>
#include <vector>
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>> &points)
{
    int ans = 0;
    for (int i = 0; i < points.size() - 1; i++)
    {
        int xi = points[i][0] - points[i + 1][0];
        int yi = abs(points[i][1] - points[i + 1][1] - xi);
        ans += (abs(xi) + yi);
    }
    return ans;
}

int main()
{
    // above function is the solution!
    // no driver code was writter for this problem!
    return 0;
}