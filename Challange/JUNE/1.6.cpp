#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
    {
        sort(people.begin(), people.end(), [](vector<int> &a, vector<int> &b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        vector<vector<int>> res;
        for (auto p : people)
            res.insert(res.begin() + p[1], p);
        return res;
    }
};

int main()
{
    Solution solve;
    vector<vector<int>> input = {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
    auto solved = solve.reconstructQueue(input);
    for(auto arr : solved) for(int a : arr) cout << a << " ";
    return 0;
}