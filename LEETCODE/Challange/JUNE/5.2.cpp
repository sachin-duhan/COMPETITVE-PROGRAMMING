#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    class TrieNode {
    public:
        TrieNode* children[26];
        bool word;
        
        TrieNode() {
            word=false;
            for(int i=0;i<26;i++) children[i]=nullptr;
        }
        
        TrieNode* get(char c)
        {
            return children[c-'a'];
        }
        
        TrieNode* put(char c)
        {
            TrieNode* node=new TrieNode();
            children[c-'a']=node;
            return node;
        }
    };
    
    TrieNode* trie;
    int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    int m;
    int n;
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m=board.size();
        n=board[0].size();
        buildTrie(words);
        
        vector<string> ans;
        string str;
        vector<bool> visited(m*n,false);
        for(int r=0;r<m;r++)
        {
            for(int c=0;c<n;c++)
            {
                str="";                
                backtrack(r,c,board,visited,str,trie,ans);
            }
        }
        
        return ans;
    }
    
    void buildTrie(vector<string>& words)
    {
        trie=new TrieNode();
        for(auto& word:words)
        {
            TrieNode* cur=trie;
            for(char c:word)
            {
                TrieNode* node=cur->get(c);
                if(node) cur=node;
                else cur=cur->put(c);
            }
            cur->word=true;
        }
    }
    
    void backtrack(int r,int c,vector<vector<char>>& board,vector<bool>& visited,string& str,TrieNode* node,vector<string>& ans)
    {
        if(node==nullptr)
            return;
        
        TrieNode* cur=node->get(board[r][c]);
        if(cur==nullptr)
            return;
        
        visited[r*n+c]=true;
        str.push_back(board[r][c]);
        
        if(cur->word)
        {
            ans.push_back(str);
            cur->word=false;
        }
        
        for(int d=0;d<4;d++)
        {
            int nr=r+dir[d][0];
            int nc=c+dir[d][1];
            int next=nr*n+nc;
            if(nr>=0 && nr<m && nc>=0 && nc<n && !visited[next])
            {
                backtrack(nr,nc,board,visited,str,cur,ans);
            }
        }
        
        visited[r*n+c]=false;
        str.pop_back();
    }
};