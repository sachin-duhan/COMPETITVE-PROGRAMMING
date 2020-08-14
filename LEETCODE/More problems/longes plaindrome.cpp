#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(char c : s) m[c]++;
        int ans = 0;
        bool flag = false;
        for(auto itr : m){
            ans += int(itr.second / 2)*2;
            itr.second %= 2;
            // cout << itr.first << " " << itr.second << endl;
            if(itr.second %2 ==0) ans+=itr.second;
            else {
                ans += !flag ? 1 : 0;
                flag = true;
            }
        }
        return ans;
    }
};
