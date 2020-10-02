#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool chkNumber(const string &str)
{
    return !str.empty() &&
           (str.find_first_not_of("[0123456789]") == std::string::npos);
}

vector<string> split(const string &str, char delim)
{
    auto i = 0;
    vector<string> list;
    auto pos = str.find(delim);
    while (pos != string::npos)
    {
        list.push_back(str.substr(i, pos - i));
        i = ++pos;
        pos = str.find(delim, pos);
    }
    list.push_back(str.substr(i, str.length()));
    return list;
}

bool validateIP(string ip)
{
    vector<string> slist = split(ip, '.');
    if (slist.size() != 4)
        return false;
    for (string str : slist)
    {
        if (!chkNumber(str) || stoi(str) < 0 || stoi(str) > 255)
            return false;
    }
    return true;
}

int main()
{
    cout << "Enter the IP Address::";
    string ip;
    cin >> ip;
    if (validateIP(ip))
        cout << endl
             << "***It is a Valid IP Address***";
    else
        cout << endl
             << "***Invalid IP Address***";
    return 0;
}