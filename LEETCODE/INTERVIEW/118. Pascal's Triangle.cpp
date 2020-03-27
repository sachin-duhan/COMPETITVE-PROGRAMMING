#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> generate(int n)
{
    vector<vector<int>> output(n);
    output[0].push_back(1);
    for (int i = 1; i < n; i++)
        for (int j = 0; j <= i; j++)
            if (j == 0 || j == i)
                output[i].push_back(1);
            else
                output[i].push_back(output[i - 1][j - 1] + output[i - 1][j]);

    for (int i = 0; i < n; i++)
        output[i].resize(i + 1);

    return output;
}

int main()
{
    int n = 10;
    vector<vector<int>> ans = generate(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j]<< " ";
        cout << endl;
    }

    return 0;
}
