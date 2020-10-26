
#include <bits/stdc++.h>
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

int helper(Tree *root, set<int> pars)
{
    if (!root || pars.size() == 0)
        return 0;
    pars.insert(root->val);
    int lsv = helper(root->left, pars);
    int rsv = helper(root->right, pars);

    int max_val = *max_element(pars.begin(), pars.end());
    int min_val = *min_element(pars.begin(), pars.end());
    int temp = max(abs(max_val - root->val), abs(min_val - root->val));

    return max(max(temp, lsv), rsv);
}

int solve(Tree *root)
{
    if (!root)
        return 0;
    set<int> s;
    s.insert(root->val);
    int a = helper(root->left, s), b = helper(root->right, s);
    return max(a, b);
}

int main()
{
    return 0;
}
