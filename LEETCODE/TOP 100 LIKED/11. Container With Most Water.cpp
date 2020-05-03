#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int start = 0, end = height.size() - 1, ans = INT_MIN;
    while (start < end)
    {
        int area = (end - start) * min(height[start], height[end]);
        ans = max(area, ans);
        start += height[start] < height[end] ? 1 : 0;
        end -= height[end] <= height[start] ? 1 : 0;
    }
    return ans;
}

int main()
{
    vector<int> abc({1, 8, 6, 2, 5, 4, 8, 3, 7});
    cout << maxArea(abc) << endl;
    return 0;
}

/*
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate 
(i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and 
(i, 0). Find two lines, which together with x-axis forms a container, such that the container 
contains the most water.

Note: You may not slant the container and n is at least 2.
*/