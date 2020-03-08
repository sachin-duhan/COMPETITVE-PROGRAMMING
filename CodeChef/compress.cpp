#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        int a[m];
        int i;
        for (i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        bool p = true;
        i = 0;
        while (i != (m))
        {

            cout << a[i] << "";
            int count = 0;
            while ((a[i + 1] - a[i]) == 1)
            {
                count += 1;
                i = i + 1;
            }
            if (count > 1)
            {
                cout << "...";
            }
            else if (count == 1)
            {
                cout << ",";
                continue;
            }
            else
            {
                if (i == (m - 1))
                {
                    break;
                }
                else
                {
                    cout << ",";
                    i = i + 1;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
