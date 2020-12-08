
#include<bits/stdc++.h>
using namespace std;

/*===== TREENODE CODE =====
struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode * left, TreeNode * right): val(x), left(left), right(right) {}
};
*/
int helper(const string a,const string b, int i, int j){
    if(i < 0 || j < 0) return 0;
    if(a[i] == b[j]) return 1 + helper(a,b,i-1,j-1);
    return max(helper(a,b,i-1,j),helper(a,b,i,j-1));
}

int solve_dp(string a, string b) {
    int m = a.length(), n = b.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i=1; i<=m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

int solve(string a, string b) {
    if(a == b) return a.length();
    return helper(a,b,a.length()-1,b.length()-1);
}
/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/

int main(){
    return 0;
}
