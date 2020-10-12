#include <bits/stdc++.h>
using namespace std;

class Sudoku
{
    vector<vector<int>> sudoku;

    pair<int, int> _get_grid_index(int i, int j)
    {
        pair<int, int> grid_index = {i, j};
        if (i <= 2)
            grid_index.first = 0;
        else if (i <= 5)
            grid_index.first = 3;
        else if (i <= 8)
            grid_index.first = 6;

        if (j <= 2)
            grid_index.second = 0;
        else if (j <= 5)
            grid_index.second = 3;
        else if (j <= 8)
            grid_index.second = 6;
        return grid_index;
    }

    bool _is_number_in_col(int i, int j, int num)
    {
        for (int k = 0; k < 9; k++)
            if (sudoku[i][k] == num && k != j)
                return true;
        return false;
    }

    bool _is_number_in_row(int i, int j, int num)
    {
        for (int k = 0; k < 9; k++)
            if (sudoku[k][j] == num && k != i)
                return true;
        return false;
    }

    bool _is_number_in_grid(int i, int j, int num)
    {
        auto pos = _get_grid_index(i, j);
        for (int k = pos.first; k < pos.first + 3; ++k)
            for (int l = pos.second; l < pos.second + 3; ++l)
                if (sudoku[k][j] == num)
                    return true;
        return false;
    }

    void _sudoku_solve_helper(int i, int j)
    {
        if (i < 0 || j >= 9 || i >= 9 || j < 0 || this->sudoku[i][j] != 0)
            return;
        for (int k = 1; k <= 9; k++)
        {
            if (_is_number_in_col(i, j, k) || _is_number_in_row(i, j, k) || _is_number_in_grid(i, j, k))
                continue;
            else
            {
                sudoku[i][j] = k;
                int ni = i, nj = j;
                if (j == 8)
                {
                    ni++;
                    nj = 0;
                }
                else
                    nj++;
                _sudoku_solve_helper(ni, nj);
                sudoku[i][j] = 0;
            }
        }
    }

public:
    Sudoku()
    {
        this->sudoku.resize(9, vector<int>(9, 0));
    }

    Sudoku(vector<vector<int>> grid)
    {
        if (!(grid.size() == 9) || !(grid[0].size() == 9))
            throw "Invliad sudo size given";
        this->sudoku = grid;
    }

    void solve(vector<vector<int>> &grid)
    {
        _sudoku_solve_helper(0, 0);
    }
};

int main() {}