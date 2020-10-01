
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

void tower_of_hanoi(int n, char a = 'A', char b = 'B', char c = 'C')
{
    if (n == 0)
        return;
    tower_of_hanoi(n - 1, a, c, b);
    cout << n << " [ " << a << " -> " << b << " ] " << endl;
    tower_of_hanoi(n - 1, c, b, a);
}
int main()
{
    tower_of_hanoi(3);
    return 0;
}
