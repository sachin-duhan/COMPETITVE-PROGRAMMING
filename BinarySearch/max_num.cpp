
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

int solve(int n)
{
    vector<int> nums;
    while (n)
    {
        nums.push_back(n % 10);
        n /= 10;
    }
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] < 3)
        {
            nums[i] = 3;
            break;
        }
    }
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans += pow(10, i) * nums[i];
    }
    return ans;
}

int main(){
    return 0;
}
