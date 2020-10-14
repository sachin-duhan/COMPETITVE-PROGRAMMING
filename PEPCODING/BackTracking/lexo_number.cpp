
#include <bits/stdc++.h>
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

/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/

void dfs(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    for (int k = 0; k < 10; k++)
        dfs(10 * i + k, n);
}

void solve(int n)
{
    for (int i = 1; i < 10; i++)
        dfs(i, n);
    cout << endl;
}

int main()
{
    solve(100);
    return 0;
}
