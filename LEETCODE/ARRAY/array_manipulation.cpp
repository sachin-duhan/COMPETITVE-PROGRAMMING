#include <bits/stdc++.h>
using namespace std;
vector<int> replaceElements(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
            arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
        swap(arr[i], arr[i + 1]);
    arr[n - 1] = -1;
    return arr;
}

int main()
{
    vector<int> input{17, 18, 5, 4, 6, 1}, ans = replaceElements(input);
    return 0;
}