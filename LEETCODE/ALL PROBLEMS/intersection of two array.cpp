#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> ans;
        map<int, int> m;
        for (int a : nums1)
            m[a]++;
        for (int b : nums2)
            if (m.find(b) != m.end())
                ans.insert(b);
        vector<int> ret(ans.begin(), ans.end());
        return ret;
    }
};