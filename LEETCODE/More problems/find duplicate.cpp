#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> m;
        for (auto a : nums) m[a]++;
        vector<int> ans;
        for (auto i : m) if (i.second > 1) ans.push_back(i.first);
        return ans;
    }
};

int main() {
    vector<int> input{ 4, 3, 2, 7, 8, 2, 3, 1 };
    Solution solve;
    auto a = solve.findDuplicates(input);
    for (auto val :a) cout << val << " ";
    cout << endl;
    return 0;
}