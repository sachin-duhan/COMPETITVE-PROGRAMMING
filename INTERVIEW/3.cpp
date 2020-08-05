#include <bits/stdc++.h>
using namespace std;

int getMinimumPenalty(string x, string y, int pgap, int pxy)
// x and y are given input strings. pgap and pxy are given mismatch scores.
{
    int res = 0, i = 0, j = 0, n = x.length();
    while(i < n){
        while(y[j]!=x[i] && j < y.length()) j++;
        i++;
    }
    return (i - j) * pgap;
}

int main()
{
    cout << getMinimumPenalty("sample", "sam", 2, 5);
    return 0;
}
