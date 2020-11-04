
#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> mine){
    int m = mine.size(), n = m == 0 ? 0 : mine[0].size();
    vector<vector<int>> dp(m,vector<int>(n, 0));
    for(int i = m-1; i >= 0; i--)
        dp[i][n-1] = mine[i][n-1];
    
}

int main(){
    return 0;
}
