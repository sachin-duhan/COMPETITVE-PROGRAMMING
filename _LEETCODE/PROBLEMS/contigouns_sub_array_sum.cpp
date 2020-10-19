#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> store = {{0, -1}};
        int sum = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            sum += nums[i];
            int remainder = (k == 0) ? sum : (sum % k);
            auto it = store.find(remainder);
            if (it != store.end()) {
                auto index = it->second;
                if (i > index + 1) {
                    return true;
                }
            } else {
                store.insert(make_pair(remainder, i));
            }
        }
        return false;
    }
};
