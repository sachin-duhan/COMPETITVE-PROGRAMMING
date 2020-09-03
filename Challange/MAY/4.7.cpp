#include<bits/stdc++.h>
using namespace std;

vector<int> countBits(int num)
{
    vector<int> ans;
    for (int i = 0; i <= num; i++)
    {
        int curr_num = i;
        int count = 0;
        while (curr_num)
        {
            curr_num &= (curr_num - 1);
            count++;
        }
        ans.push_back(count);
    }
    return ans;
}