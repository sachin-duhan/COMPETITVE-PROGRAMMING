
#include<bits/stdc++.h>
using namespace std;

struct Tree{
    int val;
    Tree * left;
    Tree * right;
    Tree(): val(0), left(nullptr), right(nullptr) {}
    Tree(int x): val(x), left(nullptr), right(nullptr) {}
    Tree(int x, Tree * left, Tree * right): val(x), left(left), right(right) {}
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
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int ans = 0;
void helper(Tree *root)
{
    if (!root)
        return;
    if ((!root->right && root->left) || (!root->left && root->right))
        ans++;
    helper(root->right);
    helper(root->left);
}

int solve(Tree *root)
{
    ans = 0;
    helper(root);
    return ans;
}

int main(){
    return 0;
}
