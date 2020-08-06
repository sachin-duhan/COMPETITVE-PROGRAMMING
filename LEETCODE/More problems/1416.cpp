#include<bits/stdc++.h>
using namespace std;
class Solution {

    set<string> bins;
    void bin_combinations(string curr, int k) {
        if (curr.length() > k) return;
        if (curr.length() == k) bins.insert(curr);
        bin_combinations(curr+'0', k);
        bin_combinations(curr+'1', k);
    }

public:
    bool hasAllCodes(string s, int k) {
        map<string, int> subs;
        for (int i =0;i<s.length()-k;i++)
            subs[s.substr(i, k)]++;
        return subs.size() == pow(2, k);
    }
};

int main() {
    Solution solve;
    solve.hasAllCodes("000011100", 3);
    return 0;
}