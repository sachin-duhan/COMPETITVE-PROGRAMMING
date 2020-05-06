#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int a : nums) m[a]++;
        int ans = INT_MIN, val = 0;
        for(auto itr = m.begin();itr!=m.end();itr++){
            if(ans <= itr->second){
                ans = itr->second;
                val = itr->first;
            }
        }
        return val;
    }
};
