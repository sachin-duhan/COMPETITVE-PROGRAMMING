#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string str;
        cin >> str;
        int s = str.length();
        int arr[26] = {0};
        for (int i = 0; i < s; i++)
        {
            arr[str[i] - 'a']++;
        }
        int max = 0, k = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                k = i;
            }
        }
        cout << max << " " << char('a' + k) << endl;
        t--;
    }
    return 0;
}