#include <iostream>
#include <vector>
using namespace std;

string solve(vector<string> &strs)
{
    string str = "";
    int j = 0;
    bool flag = true;
    while (true)
    {
        int t = 0;
        for (int i = 1; i < strs.size(); i++)
        {
            if (strs[i][j] != strs[i - 1][j])
            {
                flag = false;
                break;
            }
            else
                t = i;
        }
        if (!flag)
            break;
        else
        {
            str += strs[t][j];
            j++;
        }
    }
    return str;
}
int main()
{
    vector<string> arr{"dog", "racecar", "car"};
    cout << solve(arr) << endl;
    return 0;
}