#include <bits/stdc++.h>
using namespace std;

vector<string> wordSubsets(vector<string> &A, vector<string> &B)
{
    auto ans = A;
    map<string, map<char,int>> counts;
    for(string s : ans){
        map<char,int> m;
        for(char c : s) m[c]++;
        counts.insert(make_pair(s, m));
    }

    for (string letter : B)
        for(string word : ans){
            auto check = counts.find(word)->second;
            for(char c : letter)
                if(check.find(c)==check.end() || --check[c]<=0){
                    auto itr = find(ans.begin(),ans.end(),word);
                    ans.erase(itr);
                }
        }

    return ans;
}

int main()
{
    vector<string> A{"facebook", "google", "amazon"}, B{"lo", "eo"}, ans = wordSubsets(A, B);
    for (string s : ans)
        cout << s << endl;
    return 0;
}