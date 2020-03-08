#include <bits/stdc++.h>
using namespace std;

/* 
The median of M numbers is defined as the middle number after 
sorting them in order if M is odd.Or it is the average of the middle two numbers if M is even.
You start with an empty number list.Then, you can add numbers to the list, or remove existing numbers from it.
After each add or remove operation, output the median.
*/

int calc_median(set<pair<int, int>> s, int total)
{
    int count = s.size(), mean = total / count;
    sort(s, s + count);
    int mode = s[0].first;
    return (int)(2 * mean + mode) / 3;
}

void median(vector<char> c, vector<int> X)
{
    set<pair<int, int>> s;
    int ans = 0, total = 0, s = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (c[i] == 'a')
        {
            total += X[i];
            pair<int, int> p;
            p.second = 1;
            p.first = X[i];
            s.insert(p);
            ans = calc_median(s, total);
        }
        else if (c[i] == 'r')
        {
            // remove
            set<pair<int, int>>::iterator itr;
            for (auto itr = s.begin(); itr != s.end(); itr++)
            {
                if ((*itr).second == X[i])
                {
                    (*itr).first -= 1;
                    total -= X[i];
                    ans = calc_median(s, total);
                }
            }
        }
        cout << ans << endl;
    }
}
int main(void)
{
    int N;
    cin >> N;
    vector<char> s;
    vector<int> X;
    char temp;
    int tempint;
    for (int i = 0; i < N; i++)
    {
        cin >> temp >> tempint;
        s.push_back(temp);
        X.push_back(tempint);
    }
    median(s, X);
    return 0;
}
