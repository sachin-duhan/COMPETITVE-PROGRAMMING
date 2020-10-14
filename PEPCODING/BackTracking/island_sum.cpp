
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
typedef vector<vector<int>> vvi;
typedef long long int;

class solution
{
    int max_gold_val = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    void dfs(vvi &island, int i, int j, int curr)
    {
        if (i < 0 || j < 0 || i > island.size() || j > island.size() || island[i][j] == 0)
            return;
        int gold = island[i][j];
        island[i][j] = 0; // mark visited!!
        max_gold_val = max(max_gold_val, gold + curr);
        for (int k = 0; k < 4; k++)
            dfs(island, i + dx[k], j + dy[k], curr + gold);
    }

public:
    int max_island(vvi island)
    {
        for (int i = 0; i < island.size(); i++)
            for (int j = 0; j < island[0].size(); j++)
                dfs(island, i, j, 0);
        return this->max_gold_val;
    }
};
int main()
{
    return 0;
}
