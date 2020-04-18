#include <iostream>
#include <vector>
using namespace std;

int solve(vector<string> ans)
{
    int val = 0;
    for (int i = 0; i < ans[0].length(); i++)
        for (int j = 0; j < ans.size() - 1; j++)
            if (int(ans[j][i]) < int(ans[j + 1][i]))
            {
                val = i;
                break;
            }

    return val;
}
int main()
{
    vector<string> ans{"cbax", "dafy", "ghiz"};
    cout << solve(ans) << endl;
    return 0;
}