#include <bits/stdc++.h>
using namespace std;

bool helper(int i, int j, int index, string word, vector<vector<char>> &board)
{
    if (index == word.length())
        return true;

    if (board[i][j] != '#' && i > 0 && i < board.size() && i > 0 && i < board[0].size() && board[i][j] == word[index])
    {
        if (
            helper(i - 1, j, index + 1, word, board) ||
            helper(i + 1, j, index + 1, word, board) ||
            helper(i, j + 1, index + 1, word, board) ||
            helper(i, j - 1, index + 1, word, board))
            return true;
    }
    board[i][j] = '#';
    return false;
}

bool exist(vector<vector<char>> &board, string word)
{
    if (word.length() == 0 || board.size() == 0)
        return false;
    int m = board.size();
    int n = m == 0 ? 0 : board[0].size();

    bool flag = false;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (!flag && board[i][j] == word[0])
            {
                board[i][j] = '#';
                flag = helper(i, j, 1, word, board);
            }
    return flag;
}

int main()
{
    vector<vector<char>> board{{'A', 'B', 'C', 'E'},
                               {'S', 'F', 'C', 'S'},
                               {'A', 'D', 'E', 'E'}};
    cout << exist(board, "ABCC") << endl;
    return 0;
}