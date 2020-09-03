#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int a: nums)m[a]++;
        for(auto itr : m) if(itr.second == 1) return itr.first;
        return -1;
    }
};
