#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        vector<int> ans;

        for (int el : nums) m[el]++;
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
};