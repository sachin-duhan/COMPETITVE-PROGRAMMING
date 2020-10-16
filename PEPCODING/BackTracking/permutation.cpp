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

// print all possible ways of print n numbers in t slots!!

void permutation(vector<int> &slots, int ci, int ti)
{
    if (ci > ti)
    {
        for (auto a : slots)
            cout << a << " ";
        cout << endl;
        return;
    }
    for (int i = 0; i < slots.size(); i++)
    {
        if (slots[i] == -1)
        {
            slots[i] = ci;
            permutation(slots, ci + 1, ti);
            slots[i] = -1;
        }
    }
}

int main()
{
    int n = 4, t = 3;
    vector<int> slots(t, -1);
    permutation(slots, 1, t);
    return 0;
}
