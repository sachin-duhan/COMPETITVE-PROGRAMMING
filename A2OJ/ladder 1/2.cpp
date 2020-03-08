#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        int res = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            res += arr[i] / b;
        }
        cout << res << endl;
        t--;
    }

    return 0;
}