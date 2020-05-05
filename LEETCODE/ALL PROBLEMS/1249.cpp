#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    string ans = "";
    stack<int> ind;
    unordered_map<int,bool> vis;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(') ind.push(i);
        if(s[i]==')'){
            if(!ind.empty()) ind.pop();
            else vis[i] = true;
        }
    }
    
    while (!ind.empty())
    {
        vis[ind.top()] = true;
        ind.pop();
    }

    for (int i = 0; i < s.length(); i++)
        if(!vis[i])ans+= s[i];
    return ans;
}

int main(){
string s = "leetcode()()";
return 0;
}