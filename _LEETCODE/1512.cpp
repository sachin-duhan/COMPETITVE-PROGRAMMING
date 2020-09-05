#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        for(int a : nums) m[a]++;
        int ans = 0;
        for(auto val : m) ans += (val.second * (val.second-1)) / 2;
        return ans;
    }
};
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        for(int a : nums) m[a]++;
        int ans = 0;
        for(auto val : m) ans += (val.second * (val.second-1)) / 2;
        return ans;
    }
};