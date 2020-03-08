#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
        cin >> arr[i];

    int count = 1;
    for (int i = t - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
            count++;
        else
            break;
    }

    cout << count << endl;
    return 0;
}