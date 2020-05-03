#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        if (arr.size() == 1)
            return false;
        map<int, int> m;
        for (int a : arr)
            m[a]++;
        for (auto a : arr)
        {
            if (a == 0 && m.find(a) != m.end() && m[a] > 1)
                return true;
            if (a != 0 && m.find(a * 2) != m.end())
                return true;
        }
        return false;
    }
};