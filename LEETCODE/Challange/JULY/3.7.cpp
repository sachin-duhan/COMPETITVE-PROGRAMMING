#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m,n;
    vector<int>dr,dc;
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size(),n = board[0].size();
        dr = {-1,1,0,0},dc = {0,0,-1,1};
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                if(f(i,j,0,board,word)) return 1;
            }
        }
        return 0;
    }
    
    bool f(int i,int j,int pos,vector<vector<char>>& board, string& word){
        if(pos == word.size()) return 1;
        if(i < 0 or i >= m or j < 0 or j >= n) return 0;
        if(board[i][j] != word[pos]) return 0;
        char ch = board[i][j];
        board[i][j] = '#';
        for(int rc = 0;rc < 4;rc++){
            if(f(i + dr[rc],j + dc[rc],pos + 1,board,word)) return 1;
        }
        board[i][j] = ch;
        return 0;
    }
};
