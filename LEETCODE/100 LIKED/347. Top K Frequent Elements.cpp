#include <bits/stdc++.h>
using namespace std;

bool sortHelper(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> m;
    vector<int> ans;

    for (auto el : nums)
    {
        auto itr = m.find(el);
        if (itr != m.end())
            itr->second++;
        else
            m.insert(make_pair(el, 1));
    }

    // make a heap now!
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
    for (auto el : m)
    {
        heap.push(make_pair(el.second, el.first));
        if (heap.size() > k)
            heap.pop();
    }

    while (heap.size())
    {
        ans.push_back(heap.top().second);
        heap.pop();
    }

    return ans;
}

int main()
{
    int k = 2;
    vector<int> arr({1, 1, 1, 2, 2, 3, 3, 3, 3,}), ans = topKFrequent(arr, k);
    for (auto el : ans)
        cout << el << " ";
    cout << endl;
    return 0;
}