
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
class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int n = nums.size();
        if (n == 0) return 0;
        int res = nums[0], max_n = res, min_n = res;
        for (int i = 1; i < n; i ++){
            if (nums[i] < 0) swap(max_n, min_n);
            max_n = max(max_n * nums[i], nums[i]);
            min_n = min(min_n * nums[i], nums[i]);
            res = max(res, max_n);
        }
        return res;
    }
};

int main(){
    return 0;
}
