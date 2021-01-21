
#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> arr)
{
    for (auto a : arr)
    {
        for (auto el : a)
        {
            cout << el << " ";
        }
        cout << endl;
    }
}

void reverse_a_2D_array_and_element(vector<vector<int>> &arr)
{

    for (auto &a : arr)
        reverse(a.begin(), a.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<vector<int>> input({{1, 2}, {34, 27}, {11, 90}, {89, 46}});
    reverse_a_2D_array_and_element(input);
    print(input);
    return 0;
}
