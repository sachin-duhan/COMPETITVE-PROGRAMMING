#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int numbers[10];
        for (int i = 0; i < 10; i++)
            cin >> numbers[i];
        sort(numbers, numbers + 10);
        cout << numbers[8] << endl;
    }
    return 0;
}