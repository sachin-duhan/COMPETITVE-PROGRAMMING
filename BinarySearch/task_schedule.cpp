
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
int solve(vector<int> &nums, int k)
{
    if (k == 0 || nums.size() == 0)
        return nums.size();
    map<int, int> m;
    for (auto a : nums)
        m[a]++;
    if (m.size() == 1)
    {
        int freq = m.begin()->second;
        return freq + (freq - 1) * k;
    }
    int ans = 0;
    queue<int> q;
    for (auto a : m)
        q.push(a.first);
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        if (m[curr] <= 0)
            continue;
        if (q.empty())
        {
            ans += m[curr] + (m[curr] - 1) * k;
            break;
        }
        else
        {
            ans++;
            m[curr]--;
            if (m[curr] > 0)
                q.push(curr);
        }
    }
    return ans + 1;
}

int main()
{

    return 0;
}
