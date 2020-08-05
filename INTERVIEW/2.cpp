#include <bits/stdc++.h>

using namespace std;

int possiblerotation(int n, vector<int> arr, int s)
{
    if(arr[n] == 0) return 1;
    if(s < 0 || s > n || arr[s] == -1) return 0;
    arr[s] = -1;
    int a = possiblerotation(n,arr,s+arr[s]), b = possiblerotation(n, arr, s-arr[s]);
    if(a == 1 || b == 1) return 1;
    return 0;
}

void printPossiblerotation(int n, vector<int> arr, int s)
{
    if (possiblerotation(n, arr, s) == 1)
    {
        cout << "Yes\n";
    }
    else if (possiblerotation(n, arr, s) == 0)
    {
        cout << "No\n";
    }
}

int main()
{
    int len, temp, s, nTest;
    cin >> nTest;
    for (int j = 0; j < nTest; ++j)
    {
        cin >> len;
        vector<int> arr;
        for (int i = 0; i < len; ++i)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        cin >> s;
        printPossiblerotation(len, arr, s);
    }
    return 0;
}