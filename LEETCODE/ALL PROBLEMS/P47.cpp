#include<bits/stdc++.h>
using namespace std;
map<string, int> permutations;
void permute(string s, int l, int r){
	if(r==l) permutations[s]++;
	else for (int i = l; i < r; ++i)
	{
		swap(s[l],s[i]);
		permute(s,l+1,r);
		swap(s[l],s[i]);
	}
}

int main(){
	string small = "aba", large = "aba";
	for (int i = 0; i < large.length()-small.length(); ++i)
	{
		if(permutations.find(substr(i,small.length()))!=permutations.end())
			cout << substr(i,small.length()) << endl;
	}

	// solution 2
	int ans= 0;
	if(small == large)ans =1;
	else {	vector<int> v(26,0);
		for (int i = 0; i < large.length()-small.length(); ++i)
		{
			vector<int> temp = v;
			bool flag = true;
			for (int j = i; j < small.length(); ++j)
			{
				if(--temp[large[i]-'a'] < 0) {
					flag = false;
					break;
				}
			}
			if(flag) ans++;
		}
	}	cout << ans <endl;
	return 0;
}
