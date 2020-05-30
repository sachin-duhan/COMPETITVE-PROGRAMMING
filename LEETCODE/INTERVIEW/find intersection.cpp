#include<bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    map<int, int> m;
    for (int a : nums1)
        m[a]++;

    vector<int> ans;
    for (int a : nums2)
        if (m.find(a) != m.end() && m[a] > 0)
        {
            ans.push_back(a);
            m[a]--;
        }
    return ans;
}
int main(){
    // code was written in Leetcode IDE!!
    return 0;
}