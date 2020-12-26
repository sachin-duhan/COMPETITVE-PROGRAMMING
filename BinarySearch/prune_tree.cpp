
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

TreeNode* solve(TreeNode* root) {
    if(!root) return NULL;
    root->left = solve(root->left);
    root->right = solve(root->right);
    if(!root->right && !root->left && root->val == 0){
        return NULL;
    }
    return root;
}

int main(){
    return 0;
}
