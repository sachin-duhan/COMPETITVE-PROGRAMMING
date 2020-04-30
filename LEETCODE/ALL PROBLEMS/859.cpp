#include <bits/stdc++.h>
using namespace std;
bool buddyStrings(string A, string B)
{
    if (A.size() != B.size())
        return false;
    bool trig = false;
    for (int i = 0; i < A.length(); i++)
    {
        if (trig && A[i] != B[i])
            return false;
        else if (A[i] != B[i])
        {
            if (i == A.length() - 1)
                return false;
            if (A[i] == B[i + 1] && A[i + 1] == B[i])
            {
                swap(A[i], A[i + 1]);
                trig = true;
            }
        }
    }
    return true;
}

class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length()!=B.length()) return false;
        vector<pair<int,int>>v;bool flag=false;
        unordered_map<char,int>mp;
        for(int i=0 ; i<A.length() ; i++)
        {
            if(A[i]!=B[i]) v.push_back({A[i],B[i]});
            else mp[A[i]]++;
            if(mp[A[i]]>1) flag=true;              //for cases where same character at different position can be swapped example acab and acab.
        }
        if(v.size()==2)
        {
            if(v[0].first==v[1].second and v[0].second==v[1].first) return true;
            else return false;
        }
        if(v.size()==0 and flag) return true;
        return false;
    }
};

int main()
{

    return 0;
}