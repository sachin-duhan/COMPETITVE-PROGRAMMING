#include <bits/stdc++.h>
using namespace std;

int get_min_SDE_number(vector<string> rSkils, vector<vector<string>> all_skills)
{
    // bimask prblem
    
}

int main()
{
    int n;
    cin >> n;
    vector<string> requried_skills;
    while (n--)
    {
        string skill;
        cin >> skill;
        requried_skills.push_back(skill);
    }
    int person;
    cin >> person;
    vector<vector<string>> all_skills;
    while (person--)
    {
        int skill_number;
        cin >> skill_number;
        vector<string> person_skills;
        while (skill_number--)
        {
            string skill;
            cin >> skill;
            person_skills.push_back(skill);
        }
        all_skills.push_back(person_skills);
    }
    cout << get_min_SDE_number(requried_skills, all_skills) << endl;
    return 0;
}