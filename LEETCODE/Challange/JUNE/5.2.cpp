#include <bits/stdc++.h>
using namespace std;
class Trie
{
public:
    Trie *children[26];
    bool isEnd;

    Trie()
    {
        for (auto &c : children)
            c = NULL;
    }

    ~Trie()
    {
        for (auto &c : children)
            delete c;
    }

    void insert(string s)
    {
        Trie *curr = this;
        for (char c : s)
        {
            if (!(curr->children[c - 'a']))
                curr->children[c - 'a'] = new Trie();
            curr = curr->children[c - 'a'];
        }
        curr->isEnd = true;
    }
};

class Solution
{
    int m, n;
    bool dfs(string word, int k, vector<vector<char>> board, int i, int j)
    {
        if (k >= word.length())
            return true;
        if (i < m && i >= 0 && j < n && j >= 0 && board[i][j] == word[k])
        {
            bool isFound = false;
            char temp = board[i][j];
            board[i][j] = '!';
            int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
            for (int i = 0; i < 4; i++)
            {
                if (isFound)
                    return isFound;
                isFound = dfs(word, k + 1, board, i + dx[i], j + dx[j]);
            }
            board[i][j] = temp;
            return isFound;
        }
        return false;
    }

    bool findWord(string word, vector<vector<char>> board)
    {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (word[0] == board[i][j])
                    return dfs(word, 0, board, 0, 0);
        return false;
    }

public:
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        m = board.size(), n = m == 0 ? 0 : board[0].size();
        vector<string> ans;
        if (words.size() == 0 || m == 0)
            return {};
        for (auto a : words)
            if (findWord(a, board))
                ans.push_back(a);
        return ans;
    }
};
