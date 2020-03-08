#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (auto i = a; i < n; i++)

int bearAllowed(int n,string s[n], int i, int j){
    if(s[i][j] == '?'){
        
    }
}

void solve()
{
    int n;
    cin >> n;
    string s[n];
    int ans = 0;
    loop(i, 0, n) cin >> s[0];
    loop(i,0,n){
        loop(j,0,n){
            if(s[i][j]=='?'){ // empty!
                if(s[(i+1)%n][j] == '.')
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}