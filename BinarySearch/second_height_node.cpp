
#include<bits/stdc++.h>
using namespace std;

struct Tree {
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

set<int, greater<int>> heights;
void helper(Tree *root, int level)
{
    if (!root)
        return;
    else if (!root->right && !root->left)
        heights.insert(level);
    else
    {
        helper(root->left, level + 1);
        helper(root->right, level + 1);
    }
}

int solve(Tree *root)
{
    heights.clear();
    helper(root, 0);
    auto itr = heights.begin();
    advance(itr, 1);
    return *itr;
}

int main(){
    return 0;
}
