
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

bool solve(string s) {
    int chars[26]{0};
    for(char c : s) chars[c-'a']++;
    bool isOne = false;
    for(int i = 0; i < 26; i++){
        if(isOne && chars[i]%2!=0) return false;
        if(chars[i]%2 != 0) isOne = true;
    }
    return true;
}

/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/

int main(){
    return 0;
}
