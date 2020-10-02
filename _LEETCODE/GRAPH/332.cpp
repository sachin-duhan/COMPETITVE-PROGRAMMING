
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<string, multiset<string>> map;

    void hamiltonian(string curr, vector<string> &ans)
    {
        while (!map[curr].empty())
        {
            auto it = map[curr].begin();
            string temp = *it;
            map[curr].erase(it);
            hamiltonian(temp, ans);
        }
        ans.push_back(curr);
    }

    vector<string> findItinerary(vector<vector<string>> &tickets)
    {
        vector<string> ans;
        map.clear();
        for (auto i : tickets)
            map[i[0]].insert(i[1]);
        hamiltonian("JFK", ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<vector<string>> t2 = {{"JFK", "KUL"}, {"JFK", "NRT"}, {"NRT", "JFK"}};
    vector<vector<string>> tickets = {{"JFK", "SFO"}, {"JFK", "ATL"}, {"SFO", "ATL"}, {"ATL", "JFK"}, {"ATL", "SFO"}};
    Solution solve;
    auto ans = solve.findItinerary(t2);
    for (string val : ans)
        cout << val << " ";
    cout << endl;
    return 0;
}
