
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

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void helper(Tree* root, vector<int> &vals){
    if(!root) return;
    helper(root->left,vals);
    vals.push_back(root->val);
    helper(root->right,vals);
}
bool solve(Tree* root) {
    vector<int> vals;
    helper(root,vals);
    int i = 0, j = vals.size()-1;
    while(i <= j){
        if(vals[i++] != vals[j--])
            return false;
    }
    return true;
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
