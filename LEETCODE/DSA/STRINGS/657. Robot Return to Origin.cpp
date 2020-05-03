#include <bits/stdc++.h>
using namespace std;
bool judgeCircle(string moves)
{
    pair<int, int> position(0, 0);
    for (auto c : moves)
    {
        if (c == 'L')
            position.first--;
        else if (c == 'R')
            position.first++;
        else if (c == 'U')
            position.second++;
        else
            position.second--;
    }

    if (position.first == 0 && position.second == 0)
        return true;
    return false;
}

int main()
{
    string s = "UDLR";
    cout << judgeCircle(s) << endl;
    return 0;
}