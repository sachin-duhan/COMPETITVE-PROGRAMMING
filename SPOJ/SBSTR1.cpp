// KPM ALGORITHM QUESTION!
#include <bits/stdc++.h>
using namespace std;

// bool solve(string s, string t){

//     vector<int> back(n, 0);
//     int i = 0, j = 0;
//     while (j < m)
//     {
//         if (t[i] == t[j])
//         {
//             back[j] = i + 1;
//             i++;
//             j++;
//         }
//         else
//             j++;
//     }

//     for(i = 0; i < m; i++)
//     {
//         while (s[i++] == t[j++])continue;
//         if (j == i + n - 1)
//             return true;
//         else
//             j = back[j];
//     }
//     return false;
// }

bool solve(string s, string t)
{
    int m = s.length(), n = t.length();
    for (int i = 0; i < m; i++)
    {
        int j = 0;
        while(s[i+j] == t[j]){j++;}
        if(j == i+n-1) return true;
    }
    return false;
}

int main()
{
    string s = "defabc", t = "abc";
    cout << (solve(s, t) ? "found" : "nopes") << endl;
    return 0;
}