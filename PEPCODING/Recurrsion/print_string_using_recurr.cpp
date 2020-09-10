
#include <bits/stdc++.h>
using namespace std;

void print(string s, int index)
{
    if (index < 0)
        return;
    print(s, index - 1);
    cout << s[index];
}
int main()
{
    print("sachin", 5);
    cout << endl;
    return 0;
}
