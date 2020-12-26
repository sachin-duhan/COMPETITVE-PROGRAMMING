
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode * left, TreeNode * right): val(x), left(left), right(right) {}
};

/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/
void helper(TreeNode* root, int level, vector<int> &ans){
    if(!root) return;
    if(level > ans.size()) ans.push_back(root->val);
    helper(root->left,level+1,ans);
    helper(root->right,level+1,ans);
}

vector<int> solve(TreeNode* root) {
    vector<int> ans;
    helper(root,1,ans);
    return ans;
}


int main(){
    return 0;
}
