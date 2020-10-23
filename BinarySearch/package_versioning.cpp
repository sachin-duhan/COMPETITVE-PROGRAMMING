
#include<bits/stdc++.h>
using namespace std;

vector<int> process(string str)
{
    vector<int> ans;
    string a = "";
    for (auto c : str)
    {
        if (c == '.')
        {
            ans.push_back(stoi(a));
            a = "";
        }
        else
            a += c;
    }
    ans.push_back(stoi(a));
    return ans;
}

bool solve(string older, string newer)
{
    auto old = process(older), _new = process(newer);
    for (int i = 0; i < 3; i++)
    {
        // cout << a[i] << " & " << b[i] << endl;
        if (old[i] < _new[i])
            return true;
        else if (old[i] > _new[i])
            return false;
    }
    return false;
}

int main(){
    return 0;
}
