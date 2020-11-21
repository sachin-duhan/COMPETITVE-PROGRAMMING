#include <bits/stdc++.h>
using namespace std;

int alternatingCharacters(string s) {
    int ans = 0, n = s.length(), i =0;
    while(i<n){        
        char c = s[i++];
        while(i<n && s[i]==c){
            ans++;
            i++;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}