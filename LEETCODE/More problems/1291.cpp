#include<bits/stdc++.h>
using namespace std;

class Solution {
    void util(int &low, int &high, int p, vector<int>&ans) {
        p = p*10 + (p%10 +1);
        if (p > high) return;
        if (p >= low && p <= high) ans.push_back(p);
        if (p%10 == 9)return;
        util(low, high, p, ans);
    }

public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for (int i = 1; i < 9; i++)
            util(low, high, i, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {

}