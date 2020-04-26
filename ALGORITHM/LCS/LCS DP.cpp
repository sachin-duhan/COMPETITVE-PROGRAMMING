#include <bits/stdc++.h>
using namespace std;

/*
we need a dp for m+1 and n+1
the first element of the dp represent the empty string!
row(0) = 0 and col(0) = 0
each cell in dp[i][j] represent the result of the max LCS of the string s and string t 
if s[i] == t[j] the dp[i-1][j-1] contains the answer of the LCS without including the s[i] and t[i] char
so dp[i][j] = dp[i-1][j-1]+1 is the new value
and when the value doesnot match than in that case we use the max of the dp[i-1][j] and d[i][j-1]
*/

int LCS(string s, string t){
    int m =s.length(), n =t.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            if(s[i-1]==t[i-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    return dp[m-1][n-1];
}

int main()
{
    string s = "abc", t = "ac";
    cout << LCS(s,t) << endl;
    return 0;
}