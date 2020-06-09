#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        // action here bro<3 go fuck it
        int n;
        cin >> n;
        int val = n;
        for (int i = 0; i < 10; i++)
        {
            cout << val << " ";
            val += n;
        }
        cout << endl;
        t--;
    }
    return 0;
}