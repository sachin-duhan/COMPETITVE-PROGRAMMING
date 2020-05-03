#include <bits/stdc++.h>
using namespace std;
vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    vector<pair<int, int>> q;
    for (int i = 0; i < mat.size(); i++)
    {
        int freq = count(mat[i].begin(), mat[i].end(), 1);
        q.push_back(make_pair(i, freq));
    }
    sort(q.begin(), q.end(), [](pair<int, int> a, pair<int, int> b) {
        return (a.second == b.second) ? b.first < a.first : a.second > b.second;
    });
    vector<int> ans;
    for (int i = 0; i < k; i++)
        ans.push_back(q[q.size() - 1 - i].first);
    return ans;
}

int main()
{
    vector<vector<int>> input{{1, 1, 0, 0, 0},
                              {1, 1, 1, 1, 0},
                              {1, 0, 0, 0, 0},
                              {1, 1, 0, 0, 0},
                              {1, 1, 1, 1, 1}};
    vector<int> ans = kWeakestRows(input, 3);
    for (auto el : ans)
        cout << el << " ";
    cout << endl;
    return 0;
}