#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans = 0;
        sort(citations.begin(), citations.end());
        int n = citations.size();
        for (int i = 0; i < n; ++i)
            ans = citations[i] <= n - i ? max(ans, citations[i]) : ans;
        return ans;
    }
};

class Solution {
public:
    int hIndex(vector<int>& c) {
        // 3 support variables for us
        int s = 0, e = c.size() - 1, avg;
        // the base of every happy binary search ever: having a sorted dataset
        sort(begin(c), end(c));
        // some good old binary search here to find the maximum element meeting the conditions
        while (s <= e) {
            if (c[avg = (e + s) / 2] < c.size() - avg) s = avg + 1;
            else e = avg - 1;
        }
        return c.size() - s;
    }
};


int main() {
    Solution solve;
    vector<int> input{ 3, 0, 6, 1, 4 };
    cout << solve.hIndex(input) << endl;
    return 0;
}