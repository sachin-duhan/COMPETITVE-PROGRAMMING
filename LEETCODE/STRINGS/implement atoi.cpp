#include <bits/stdc++.h>
using namespace std;

int myAtoi(string str)
{
       transform(str.begin(),str.end(),str.begin(),[](auto &c){
        if(c==' ')c-=c;
        return c;
    });
    queue<int> q;
    bool negetive = false;
    if(str[0]='-')negetive = true;
    for (auto c : str)
    {
        if (isdigit(c))
            q.push(c-48);
    }
    int size = q.size(),ans = 0;
    if(q.front()==0)size--;
    if(negetive)size--;
    while (!q.empty())
    {
        ans += q.front()*pow(10,size--);
        q.pop();
    }
    return negetive ? -ans : ans;
}

int main()
{
    string s = "  -1219 asa";
    cout << myAtoi(s) << endl;
    return 0;
}