
#include<bits/stdc++.h>
using namespace std;


#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
//complexity O(log k)
ull po(ull n,ull k){
	ull x=1;
	while(k){
		if(k&1)
			x*=n;
		n*=n;
		k>>=1;
	}
	return x;
}
int main(){
	ull n,m;
    //n^m
	cin>>n>>m;
	cout<<po(n,m);
	return 0;
}

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
