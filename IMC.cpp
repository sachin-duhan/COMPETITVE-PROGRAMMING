#include <bits/stdc++.h>
using namespace std;

pair<int, int> get_value_of_cord(string &s)
{
    int b = int(s[s.size() - 1]) - 64;
    int a = -1;
    if (s.size() == 3)
    {
        int x = int(s[0]) - 48, y = int(s[1]) - 48;
        a = 10 * x + y;
    }
    else
        a = int(s[0]) - 48;
    return make_pair(a, b);
}

void insert_value_in_map(pair<pair<int, int>, pair<int, int>> val, ap<pair<pair<int, int>, pair<int, int>>, int> m)
{
    m.insert(make_pair(val, 1));
}

string solution(int N, string &S, string &T)
{
    // vector<int,int>map(N,vector<int>(N,0));
    if (S.size() == 0 || T.size() == 0)
        return "0,0";

    map<pair<pair<int, int>, pair<int, int>>, int> m;
    // making the map that contains the ship position!
    vector<string> ships;

    string position = "";

    for (auto c : S)
    {
        // splitting the string as per ','
        if (c == ',')
        {
            ships.push_back(position);
            position = "";
        }
        else
            position += c;
    }

    for (int i = 0; i < ships.size(); i++)
    {
        string s = "";
        pair<pair<int, int>, pair<int, int>> cord;
        for (auto c : s)
        {
            if (c == ' ')
            {
                pair<int, int> p = get_value_of_cord(s);
                if (!cord.first.first)
                    cord.first = p;
                else
                    cord.second = p;
                s = "";
            }
            else
                s += c;
        }
        // putting the location of ship in a map!
        insert_value_in_map(cord, m);
    }

    // working with the attacks!
    vector<pair<int, int>> attack;
    position = "";
    for (auto c : T)
    {
        // splitting the string as per ' '
        if (c == ' ')
        {
            pair<int, int> p = get_value_of_cord(position);
            attack.push_back(p);
            position = ""; // reset
        }
        else
            position += c;
    }
}
