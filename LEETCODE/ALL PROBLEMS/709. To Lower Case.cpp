#include <iostream>
using namespace std;

string toLowerCase(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
        if (str[i] < 65 || str[i] > 90)
            ans += str[i];
        else
            ans += str[i] + 32;

    return ans;
}

int main()
{
    string s = "HELLO bitch";
    cout << toLowerCase(s) << endl;
    return 0;
}