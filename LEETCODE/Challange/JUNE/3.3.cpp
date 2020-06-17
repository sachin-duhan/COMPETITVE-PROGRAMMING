#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void make_marked(vector<vector<char>> &board, int i, int j)
    {
        if (board[i][j] == 'X' || board[i][j] == 'S')
            return;
        board[i][j] = 'S';
        if (i + 1 < board.size())
            make_marked(board, i + 1, j);
        if (i - 1 >= 0)
            make_marked(board, i - 1, j);
        if (j - 1 >= 0)
            make_marked(board, i, j - 1);
        if (j + 1 < board[0].size())
            make_marked(board, i, j + 1);
    }

public:
    void solve(vector<vector<char>> &board)
    {
        int m = board.size();
        if (!m)
            return;
        int n = board[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                if ((i == 0 or j == 0 or j == n - 1 or i == m - 1) and board[i][j] == 'O')
                    make_marked(board, i, j);
            }

        for (auto &arr : board)
            for (char &c : arr)
            {
                if (c == 'S')
                    c = 'O';
                else if (c == 'O')
                    c = 'X';
            }
    }
};

int main()
{
    vector<vector<char>> vals;
    Solution s;
    s.solve(vals);
    for (auto a : vals)
    {
        for (char c : a)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}