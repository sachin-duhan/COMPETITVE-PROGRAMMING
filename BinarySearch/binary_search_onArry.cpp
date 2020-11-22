
#include<bits/stdc++.h>
using namespace std;

bool solve(vector<vector<int>> &mat, int x)
{
    int i = 0, n = mat.size(), j = mat[0].size() - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == x)
            return true;
        if (mat[i][j] > x)
            j--;
        else
            i++;
    }
    return false;
}
int main(){
    return 0;
}
