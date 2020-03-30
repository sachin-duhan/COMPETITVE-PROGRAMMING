#include <bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int> &A)
{
    sort(A.begin(), A.end(), [](int a, int b) {
        return a * a > b * b;
    });
    reverse(A.begin(), A.end());
    transform(A.begin(), A.end(), A.begin(), [](int a) { return a * a; });
    return A;
}

int main()
{
    vector<int> arr{-1, 0, 2, 34}, ans = sortedSquares(arr);
    for (auto el : ans)
        cout << el << " ";
    return 0;
}