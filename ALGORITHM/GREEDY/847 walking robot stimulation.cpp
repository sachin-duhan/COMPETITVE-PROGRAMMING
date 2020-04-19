#include <bits/stdc++.h>
using namespace std;

int robotSim(vector<int> commands, vector<vector<int>> obstacles)
{
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0, di = 0;
    set<pair<int, int>> obs;
    for (auto arr : obstacles)
        obs.insert(make_pair(arr[0], arr[1]));

    int ans = 0;
    for (int cmd : commands)
    {
        if (cmd == -2)
            di = (di + 3) % 4;
        else if (cmd = -1)
            di = (di + 1) % 4;
        else
        {
            for (int i = 0; i < cmd; i++)
            {
                int nx = x + dx[di], ny = y + dy[di];
                if (obs.find(make_pair(nx, ny)) == obs.end())
                {
                    x = nx;
                    y = ny;
                    ans = max(ans, x * x + y * y);
                }
            }
        }
    }
    return ans;
}
int main()
{

    return 0;
}