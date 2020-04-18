#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int> &bills)
{
    if (bills.size() == 0)
        return true;
    if (bills[0] > 5)
        return false;
    vector<int> bal(3, 0);
    for (auto v : bills)
    {
        if (v == 5)
            bal[0]++;
        else
        {
            if (v == 10 && bal[0])
            {
                bal[0]--;
                bal[1]++;
            }
            else if (v == 20 && bal[1] && bal[0])
            {
                bal[0]--;
                bal[1]--;
            }
            else if (v == 20 && bal[0] > 3)
                bal[0] -= 3;
            else
                return false;
        }
    }
    return true;
}

int main()
{
    vector<int> bills{5, 5, 5, 5, 5, 10, 10, 10, 10, 10, 20};
    cout << lemonadeChange(bills);
    return 0;
}