#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> A, vector<int> B, int T)
{
    return count_if(A.begin(), A.end(), [&](auto a) {
        return all_of(B.begin(), B.end(), [=](auto b) { return abs(a - b) > T; });
    });
}

int main()
{
    return 0;
}