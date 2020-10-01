
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int A = 0, B = 0;
        unordered_map<char, int> mp;
        for (int index = 0; index < secret.size(); index++)
            if (secret[index] == guess[index])
                A++;
            else
                mp[secret[index]]++;

        for (int index = 0; index < guess.size(); index++)
            if (secret[index] != guess[index] && mp[guess[index]] > 0)
                B++, mp[guess[index]]--;
        return to_string(A) + 'A' + to_string(B) + 'B';
    }
};

int main(){
    return 0;
}
