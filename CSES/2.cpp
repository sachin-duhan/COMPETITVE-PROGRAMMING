/*
You are given all numbers between 1,2,…,n except one. 
Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and 
between 1 and n (inclusive).

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _size;
    cin >> _size;
    vector<bool> values(_size, false);
    _size--;
    while (_size--)
    {
        int temp;
        cin >> temp;
        values[temp - 1] = true;
    }

    for (int i = 0; i < values.size(); i++)
        if (values[i] == false)
            cout << i + 1 << endl;
    return 0;
}