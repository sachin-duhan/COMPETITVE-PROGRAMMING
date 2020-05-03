#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int> &A)
{
    int j = 1;
    for (int i = 0; i < A.size(); i += 2)
        if (A[i] % 2 == 1)
        {
            while (A[j] % 2 == 1)
                j += 2;
            swap(A[i], A[j]);
        }
    return A;
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5, 6}, ans = sortArrayByParityII(input);
    for (auto el : ans)
        cout << el << " ";
    cout << endl;
    return 0;
}