#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> arr){
    int n = arr.size();
    vector<int> rm(n,INT_MIN), cm(n,INT_MIN);
    for (int i = 0; i < n; i++)        
        for (int j = 0; j < n; j++)
        {
            rm[i] = max(arr[i][j],rm[i]);
            cm[i] = max(arr[i][j],cm[j]);
        }
    
    int ans = 0;
    for (int i = 0; i < n; i++)
       for (int j = 0; j < n; j++)
          ans +=  min(rm[i],cm[i]) - arr[i][j];
       
    return ans;    
}
int main()
{
    // solve 
    return 0;
}