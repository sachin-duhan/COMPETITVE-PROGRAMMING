#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> nums){
    int n = nums.size();
    vector<int> lb(n), rb(n);
    stack<int> s;
    s.push(n-1);
    rb[n-1]= n;

    for(int i = n-2; i >= 0; i--){
        while(!s.empty() && nums[i] < nums[s.top()]) s.pop();
        if(s.empty()) rb[i] = n;
        else rb[i]= s.top();
        s.push(i);
    }

    while(!s.empty())s.pop(); 
    s.push(0);
    lb[0] = -1;

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && nums[i] < nums[s.top()])
            s.pop();
        if (s.empty())
            rb[i] = -1;
        else
            rb[i] = s.top();
        s.push(i);
    }

    int maxArea = INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        int width = rb[i] - lb[i];
        int area = nums[i] * width;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main(){
    return 0;
}
