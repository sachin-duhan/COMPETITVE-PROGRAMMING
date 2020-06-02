#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &A, int B)
{
    vector<int> ret;
    int s = A.size();
    for (int i = 0; i < A.size(); i++)
    {
        int j = (i + B) % s;
        ret.push_back(A[j]);
    }
    return ret;
}
