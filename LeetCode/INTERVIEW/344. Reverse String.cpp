#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main()
{
    vector<char> c({'a', 'b', 'c'});
    reverseString(c);
    for (int i = 0; i < c.size(); i++)
            cout << c[i] << " ";
        cout << endl;
    return 0;
}