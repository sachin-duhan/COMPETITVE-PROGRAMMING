/*
A permutation of integers 1,2,…,n is called beautiful if there are no 
adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Print a beautiful permutation of integers 1,2,…,n. If there are several 
solutions, you may print any of them. 
If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106

Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
*/

#include <bits/stdc++.h>
using namespace std;
void find_permutation(int n)
{
    if (n == 1)
        cout << n << endl;
    else if (n <= 3)
        cout << "NO SOLUTION" << endl;
    else
    {
        cout << (n / 2) + 1 << " ";
        int i = 1, j = n;
        while (i < j)
            cout << i++ << " " << j-- << " ";
        cout << endl;
    }
    // 7 - 4 1 7 2 6 3 5
    // 5 - 3 1 5 2 4
    // 6 - 4 1 6 2 5 3
}
int main()
{
    int n;
    cin >> n;
    find_permutation(n);
    return 0;
}