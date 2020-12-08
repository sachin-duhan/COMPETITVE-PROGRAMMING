
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
