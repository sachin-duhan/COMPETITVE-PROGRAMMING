
#include <bits/stdc++.h>
using namespace std;

class DSU
{
    vector<int> parent;
public:
    DSU(int n)
    {
        parent.clear();
        parent.resize(n);
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }

    int find(int n){
        if(parent[n] != n) parent[n] = find(parent[n]); // optimization!!
        return parent[n];
    }

    void unionDSU(int x, int y){
        parent[find(x)] = find(y);
    }
};

int main()
{
    return 0;
}
