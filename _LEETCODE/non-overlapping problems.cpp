#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int> &a, vector<int> &b) { return a[1] < b[1]; }

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        if (intervals.size() == 0)
            return 0;
        sort(intervals.begin(), intervals.end(), compare);
        int maxNonOverlappingIntervals = 0;
        auto last = intervals[0];
        for (auto interval : intervals)
        {
            if (last[1] > interval[0])
                maxNonOverlappingIntervals++;
            else
                last = interval;
        }
        return maxNonOverlappingIntervals - 1;
    }
};

int main()
{

    return 0;
}