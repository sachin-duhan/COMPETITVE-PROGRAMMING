#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        m[temp]++;
    }
    
    sort(m.begin(), m.end(), [](auto a, auto b) {
        return a.second == b.second ? a.first > b.first : a.second > b.second;
    });
    
    for(auto itr : m){
        int times = itr.second;
        while(times--) cout << itr.first << " ";
    }
    cout << endl;
	return 0;
}