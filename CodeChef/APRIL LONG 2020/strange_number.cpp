// TLE

#include<bits/stdc++.h>
using namespace std;
int input(){ int t; cin >> t; return t;}

bool isPrime (int val){
    for (int i = 2; i < val/2; i++)
        if(val%i==0) return false;
    return true;
}

int solve()
{
    map<int,set<int>> m;
    const int X = input(), K = input();
    for (int i = (X*K)*(X*K); i >= int(X*K/2); i--)
    {
        set<int>temp;
        for (int j = 1; j <= int(sqrt(i)); j++)
            if(i%j==0){
                temp.insert(j);
                temp.insert(i/j);
            }

        if(temp.size() == X) m[i]=temp;
    }

    for(auto el : m)
    {
        int count = 0;  
        cout << el.first << " - ";
        for(auto val : el.second) {
            if(val != 1 && isPrime(val)) count++;
            cout << val << " ";
        }
        cout << endl << "number of prime are - " << count << endl;
        // if(count == K) return 1;
    }
    return 0;
}

int main(){
    int t = input();
    while (t--)
       cout << solve() << endl;
    return 0;
}