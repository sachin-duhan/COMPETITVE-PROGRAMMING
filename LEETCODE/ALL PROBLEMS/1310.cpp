#include <bits/stdc++.h>
using namespace std;

static const auto __ = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
{

    int n = arr.size();
    if (n == 0)
        return vector<int>();

    vector<int> store(n, 0);
    store[0] = arr[0];
    for (int i = 1; i < n; i++)
        store[i] = store[i - 1] ^ arr[i];

    vector<int> res(queries.size(), 0);
    for (int i = 0; i < queries.size(); i++)
        res[i] = (queries[i][0] == 0) ? store[queries[i][1]] : store[queries[i][0] - 1] ^ store[queries[i][1]];

    return res;
}

int main()
{
    vector<int> arr{1, 3, 4, 8};
    vector<vector<int>> queries{{0, 0}, {1, 1}, {2, 2}, {3, 3}};
    auto ans = xorQueries(arr, queries);
    for (int a : ans)
        cout << a << endl;
    return 0;
}