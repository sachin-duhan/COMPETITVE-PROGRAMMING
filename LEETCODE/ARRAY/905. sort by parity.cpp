#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int> &A)
{
    // approach one!

    // vector<int>O,E;
    // for(int i=0;i<A.size();i++)
    //     if(A[i]%2==0)E.push_back(A[i]);
    //     else O.push_back(A[i]);
    // for(int i=0;i<A.size();i++){
    //     if(i<E.size())A[i]=E[i];
    //     else A[i] = O[i-O.size()];
    // }

    int start = 0, end = A.size() - 1;
    while (start < end)
    {
        if (A[start] % 2 != 0 && A[end] % 2 == 0)
            swap(A[start++], A[end--]);
        else if (A[start] % 2 == 0 && A[end] % 2 != 0)
        {
            start++;
            end--;
        }
        else if (A[start] % 2 == 0)
            start++;
        else if (A[end] % 2 != 0)
            end--;
    }
    return A;
}

int main()
{
    vector<int> input {1,2,3,4},ans = sortArrayByParity(input);
    return 0;
}