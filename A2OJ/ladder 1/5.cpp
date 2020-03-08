#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int size;
        cin >> size;
        string words[size];
        int split = -1;
        for (int i = 0; i < size; i++)
        {
            cin >> words[i];
            if (words[i][0] != '#')
                split = i;
        }

        if (split == -1)
        {
            for (int j = 0; j < size; j++)
                cout << words[j] << " ";
        }
        else
        {
            for (int i = split + 1; i < size; i++)
                cout << words[i] << " ";

            cout << words[split] << " ";

            for (int j = 0; j < split; j++)
                cout << words[j] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}