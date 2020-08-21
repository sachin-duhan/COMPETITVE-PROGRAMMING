#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        vector<vector<int>> dp(A.size(),vector<int>(1001,0));
        int ans=0;
        for(int i=1;i<A.size();i++){
            for(int j=0;j<i;j++){
                int d = A[i]-A[j];
                dp[i][500+d] = dp[j][500+d] + 1;
                ans = max(ans,dp[i][500+d]);
            }   
        }
        return ans+1;
    }
};
