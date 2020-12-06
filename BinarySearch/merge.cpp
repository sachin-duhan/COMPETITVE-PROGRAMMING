
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
vector<int> solve(vector<int>& lst1, vector<int>& lst2) {
    int i = 0, j= 0;
    vector<int> ans;
    while(i < lst1.size() && j < lst2.size()){
        ans.push_back(min(lst1[i],lst2[j]));
        if(lst1[i] < lst2[j]) i++;
        else j++;
    }
    while(j < lst2.size()){
        ans.push_back(lst2[j]);
        j++;
    }
    while(i < lst1.size()){
        ans.push_back(lst1[i]);
        i++;
        // else j++;
    }
    return ans;
}


int main(){
    return 0;
}
