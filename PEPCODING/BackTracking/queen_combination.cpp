
#include <bits/stdc++.h>
using namespace std;

void queenCombination(int qpsf, int total_queen, int row, int col, string asf)
{
    if (row == total_queen)
    {
        if (qpsf == total_queen)
            cout << asf << endl;
        return;
    }

    int new_row = 0, new_col = 0;
    string queen_placed = "", queen_not_placed = "";
    if (col == total_queen - 1)
    {
        new_row = row + 1;
        new_col = 0;
        queen_placed = asf + "q\n";
        queen_not_placed = asf + "-\n";
    }
    else
    {
        new_row = row;
        new_col = col + 1;
        queen_placed = "q";
        queen_not_placed = "-";
    }

    queenCombination(qpsf + 1, total_queen, new_row, new_col, queen_placed);
    queenCombination(qpsf, total_queen, new_row, new_col, queen_not_placed);
}

int main()
{
    
    return 0;
}
