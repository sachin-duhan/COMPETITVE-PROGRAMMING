#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        for (int i = 0; i <= sqrt(num); i++)
            if (i * i == num)
                return true;
        return false;
    }
};