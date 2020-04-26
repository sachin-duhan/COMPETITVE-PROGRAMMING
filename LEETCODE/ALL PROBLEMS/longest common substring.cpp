#include <bits/stdc++.h>
using namespace std;

int helper(string s, string t, int m, int n){
		
	if(m==0 || n==0)return 0;
	else if(s[m-1]== t[n-1])
        return 1 + helper(s,t,m-1,n-1);
	else return max(helper(s,t,m-1,n),helper(s,t,m,n-1));
}

int findMaxLen(string s, string t){
    return helper(s,t,s.length(),t.length());
}

int main()
{
    string s = "sachinduhan", t = "duhan sac";
    cout << findMaxLen(s,t) << endl;
    return 0;
}
