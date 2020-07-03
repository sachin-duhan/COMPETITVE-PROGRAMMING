#include <bits/stdc++.h>
using namespace std;

void print(vector<int> cells)
{
    for (size_t i = 0; i < cells.size(); i++)
        cout << cells[i] << " ";
    cout << endl;
}

class Solution
{
public:
    vector<int> prisonAfterNDays(vector<int> cells, long long N)
    {
        int _len = cells.size();
        print(cells);
        N %= 14;
        for (long long j = 0; j < N; ++j)
        {
            cells[0] = 0;
            vector<int> nums(_len);
            for (int i = 1; i < _len - 1; i++)
            {
                if (cells[i - 1] == 0 && cells[i + 1] == 0 || (cells[i - 1] == 1 && cells[i + 1] == 1))
                    nums[i] = 1;
                else
                    nums[i] = 0;
            }
            cells = nums;
            cells[_len - 1] = 0;
            cells[0] = 0;
            print(cells);
        }
        return cells;
    }
};

int main()
{
    vector<int> cells = {1, 0, 0, 1, 0, 0, 1, 0};
    Solution s;
    cells = s.prisonAfterNDays(cells, 1000000000);
    cout << "++++++++++++++++++++++++++++++ 0,0,1,1,1,1,1,0 +++++++++++++++++++++++++++++++++" << endl;
    print(cells);
    // for (size_t i = 0; i < cells.size(); i++)
    //     cout << cells[i] << " ";
    // cout << endl;
    return 0;
}