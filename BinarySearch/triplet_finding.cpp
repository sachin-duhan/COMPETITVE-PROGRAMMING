
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

/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/

bool solve(vector<int> &nums)
{
    map<int, int> m;
    for (auto a : nums)
        m[a]++;
    for (auto a : m)
    {
        int temp = a.first / 3;
        if (m.find(temp) != m.end() && a.first % 3 == 0)
        {
            if (temp == 0 && m[temp] <= 1)
                return false;
            return true;
        }
    }
    return false;
}

int main(){
    return 0;
}
