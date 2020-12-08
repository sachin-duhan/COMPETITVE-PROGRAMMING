
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


string solve(string s) {
    // vector<int> arr(26,0);
    
    // for(char c: s){
    //     arr[c-'a']++;
    // }
    
    // string ans;
    // while(arr['a'-'a']--) ans+='a';
    // while(arr['i'-'a']--) ans+='e';
    // while(arr['i'-'a']--) ans+='i';
    // while(arr['o'-'a']--) ans+='o';
    // while(arr['u'-'a']--) ans+='u';
    
    // for(int i = 0 ; i < 26; i++)
    //     while(arr[i]--) ans += ('a'+ i);
    // return ans;
    vector<char> ch, vo;
    for(auto c : s){
        if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u')
            vo.push_back(c);
        else ch.push_back(c);
    }
    sort(ch.begin(),ch.end());
    sort(vo.begin(),vo.end());
    string ans;
    for(auto c : vo) ans+=c;
    for(auto c : ch) ans+= c;
    return ans;
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
