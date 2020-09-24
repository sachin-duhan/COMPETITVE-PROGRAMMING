#include <bits/stdc++.h>
using namespace std;

int gas_station(vector<int> gas, vector<int> costs)
{
    int n = gas.size();
    for (int i = 0; i < n; i++)
    {
        int tank = 0, position = i;
        bool possible = true;
        for (int _ = 0, tank = 0; _ < n; _++)
        {
            tank += gas[position];
            if (tank < costs[position])
            {
                possible = false;
                break;
            }
            tank -= costs[position++];
            position %= n;
        }
        if(possible) return i;
    }
    return -1;
}

int main()
{
    vector<int> gas({1, 2, 3, 4, 5}), costs({3, 4, 5, 1, 2});
    cout << gas_station(gas, costs) << endl;
    return 0;
}
