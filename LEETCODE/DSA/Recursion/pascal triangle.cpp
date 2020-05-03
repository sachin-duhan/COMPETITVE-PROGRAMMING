#include <bits/stdc++.h>
using namespace std;


vector<int> getRow(int n)
{
    vector<int> ans(n+1);
    ans[0]=1;
    // need to solve this abi!!
    return ans;
}

int main()
{
    vector<int> val = getRow(5);
    for(int a : val) cout << a << " ";
    cout << endl;
    return 0;
}