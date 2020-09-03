#include <bits/stdc++.h>
using namespace std;
bool check_straight_line(vector<vector<int>> points)
{
    if (points.size() < 2)
        return false;
    float slope = (points[1][1] - points[0][1]) / (points[1][0] - points[0][1]);
    for (int i = 0; i < points.size() - 1; i++)
    {
        float curr = (points[i + 1][1] - points[i][1]) / (points[i + 1][0] - points[i][1]);
        if (curr != slope)
            return false;
    }
    return true;
}

int main()
{
    vector<vector<int>> input{{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};

    return 0;
}