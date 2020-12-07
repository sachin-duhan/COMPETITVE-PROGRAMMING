
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

// Given a list of N coins, their values (V1, V2, … , VN), and the total sum S. Find the minimum number of coins the sum of which is S (we can use as many coins of one type as we want), or report that it’s not possible to select coins in such a way that they sum up to S.

// coins = [1,3,5]
// sum = 7

int ans = INT_MAX; // 10~

void min_coins_helper(const vector<int> &coins, const int &total, string asf, int curr_sum){
    if(curr_sum > total) return;
    if(curr_sum == total) {
        ans = min(ans,asf.size());
        return;
    }

    for(auto coin: coins)
        min_coins_helper(coins,total,asf+to_string(coin),curr_sum+coin); 
}


int main(){
    vector<int> coins({2,3,5});
    for(auto coin : coins){
        min_coins_helper(coins,21,to_string(coin),coin);
    }
}


int main(){
    return 0;
}
