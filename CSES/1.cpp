/*
! PROBLEM STATEMENT
Consider an algorithm that takes as input a positive integer n. 
If n is even, the algorithm divides it by two, and if n is odd, 
the algorithm multiplies it by three and adds one. The algorithm 
repeats this, until n is one. For example, the sequence for n=3 
is as follows:

3→10→5→16→8→4→2→1

*/

#include <bits/stdc++.h>
using namespace std;
void solve(long long n)
{
    while (n != 1)
    {
        cout << n <<  " ";
       if (n % 2 == 0)
            n /= 2;
        else
            n = (n * 3 + 1);
    }
    cout << 1 << endl;
}

int main()
{
    long long n;
    cin >> n;
    solve(n);
    return 0;
}