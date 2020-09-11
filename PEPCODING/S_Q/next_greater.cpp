#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> nums)
{
    vector<int> ans;
    stack<int> s;
    for(auto a = nums.rbegin(); a != nums.rend(); ++a){
        if(!s.empty())s.push(*a);
        
    }
    return ans;
}

int main()
{
    return 0;
}