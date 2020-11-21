#include <bits/stdc++.h>

using namespace std;

int makeAnagram(string a, string b) {
    int ans = 0;
    map<char,int> m;
    for(char c : a) m[c]++;
    for(char c : b){
        if(m.find(c) == m.end()) ans++;
        else {
            if(m[c] > 0) m[c]--;
            else ans++;
        }
    }
    m.clear();
    for(auto c : b) m[c]++;
    for(char c : a){
        if(m.find(c) == m.end()) ans++;
        else {
            if(m[c] > 0) m[c]--;
            else ans++;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

