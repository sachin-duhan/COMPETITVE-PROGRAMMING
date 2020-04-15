#include<bits/stdc++.h>
using namespace std;
class CustomFunction {
 public:
     // Returns f(x, y) for any given positive integers x and y.
     // Note that f(x, y) is increasing with respect to both x and y.
     int f(int x, int y);
};


class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customFunction, int z) {
        vector<vector<int>> result;
        for(int x = 1; x < z+1 ; x++)
        {
            for(int y = 1; y <z+1; y++)
            {
                if(customFunction.f(x, y) == z)
                {
                    result.push_back({x, y});
                }    
            }
        }
        return result;
    }
};
