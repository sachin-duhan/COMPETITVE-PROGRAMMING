
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

class Solution
{
public:
    string fractionToDecimal(int n, int d)
    {
        if (n % d == 0)
            return to_string(n / d);
        double val = n/d;
        cout << val << endl;
        auto str = to_string(val);
        return str;
    }
};

int main()
{
    Solution solution;
    cout << solution.fractionToDecimal(3, 2) << endl;
    return 0;
}
