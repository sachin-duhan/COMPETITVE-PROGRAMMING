#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
{
    sort(people.begin(), people.end(), [](vector<int> v1, vector<int> v2) {
        return v1[0] > v2[0] || (v1[0] == v2[0] && v1[1] < v2[1]);
    });

    vector<vector<int>> res;
    for (auto p : people)
    {
        res.insert(res.begin()+p[1],p);
    }

    return res;

}

int main()
{
    vector<vector<int>> input({{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}});
    return 0;
}