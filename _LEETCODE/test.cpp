#include <bits/stdc++.h>
using namespace std;

struct cmp
{
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        return a.second < b.second;
    }
};

map<string, vector<string>> favoriteVideoGenre(int numUsers,
                                               map<string, vector<string>> users,
                                               int numGenres,
                                               map<string, vector<string>> genres)
{
    map<string, string> songToGenre;
    map<string, map<string, int>> userToGenre;
    map<string, vector<string>> result;
    map<string, int> max;
    for (auto genre : genres)
    {
        for (auto song : genre.second)
        {
            songToGenre[song] = genre.first;
        }
    }

    for (auto user : users)
    {
        for (auto item : user.second)
        {
            userToGenre[user.first][songToGenre[item]]++;
            auto tempMax = userToGenre.at(user.first).at(songToGenre[item]);
            max[user.first] = std::max(tempMax, max[user.first]);
        }
    }

    for (auto user : userToGenre)
    {
        for (auto genre : user.second)
        {
            if (genre.second == max.at(user.first))
            {
                result[user.first].push_back(genre.first);
            }
        }
    }

    return result;
}