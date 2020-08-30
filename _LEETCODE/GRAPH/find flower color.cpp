#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        map<int, vector<int>> graph;
        vector<int> result(N);
        for(auto p:paths)
        {
            graph[p[0]].push_back(p[1]);
            graph[p[1]].push_back(p[0]);
        }
        for(int i = 1; i <= N; i++)
        {
            int colors[5] = {0};
            for(int child:graph[i])
                colors[result[child-1]] = 1;
            for(int j = 1; j <= 4; j++)
                if(!colors[j]){
                    result[i-1] = j;
                    break;
                }
        }
        return result;
    }
};

