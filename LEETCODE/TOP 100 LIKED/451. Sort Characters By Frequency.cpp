#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    map<char, int> m;
    for (auto c : s)
        m[c]++;
    priority_queue<pair<int, char>> max_heap;
    for (auto el : m)
        max_heap.push(make_pair(el.second, el.first));
    string ans = "";
    while (!max_heap.empty())
    {
        for (int i = 0; i < max_heap.top().first; i++)
            ans+= max_heap.top().second;        
        max_heap.pop();
    }

    return ans;
}

int main()
{
    string s = "tree";
    cout << frequencySort(s) << endl;
    return 0;
}