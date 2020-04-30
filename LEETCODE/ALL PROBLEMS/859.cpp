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

int main()
{

    return 0;
}