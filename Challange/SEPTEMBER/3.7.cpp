#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        sort(trips.begin(), trips.end(), [](auto &a, auto &b) { return a[1] == b[1] ? a[2] < b[2] : a[1] < b[1]; });
        // for(auto a:trips) cout << "[PASSANGERs] - " << a[0] << " | [START] " << a[1] << " - [END] " << a[2] << endl;
        queue<pair<int,int>> q; // first = drop | second = number of PASSANGERs!!
        int load = 0;
        for(auto trip : trips){
            if(!q.empty()) {
                while(q.front().first <= trip[1]) {
                    cout << "removed " << q.front().second << " PASSANGERs from car" << endl;
                    load -= q.front().second;
                    q.pop();
                }
            }
            load += trip[0];
            cout << trip[0] << " PASSANGERs sat in car! and total load is " << load << endl;
            q.push({trip[2],trip[0]});
            if(load > capacity) return false;
        }
        return true;
    }
};

int main()
{
    vector<vector<int>> grips = {{1, 1, 2}, {2, 2, 4}, {3, 4, 5}, {2, 3, 5}, {4, 3, 4}};
    Solution solve;
    cout << (solve.carPooling(grips,4) ? "TRUE" : "FALSE") << endl;
    return 0;
}
