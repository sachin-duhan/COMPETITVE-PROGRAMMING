#include <bits/stdc++.h>

using namespace std;

vector<int> rotLeft(vector<int> a, int d)
{
    if (a.size() == d || d == 0)
        return a;
    vector<int> temp = a;
    for (int i = 0; i < a.size(); i++)
    {
        int j = i - d;
        if (j < 0)
            j = a.size() + j;
        temp[j] = a[i];
    }
    return temp;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // print the array output!
    vector<int> result = rotLeft(arr, 2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << " ";
        }
    }
    return 0;
}
