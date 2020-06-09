#include <iostream>
#include <math.h>
using namespace std;

/* =================================================================
! problem statement 
* You a given a number N. You need to print the pattern for the given value of N. 
? for N=2 the pattern will be 
    2 2 1 1
    2 1
? for N=3 the pattern will be 
    3 3 3 2 2 2 1 1 1
    3 3 2 2 1 1
    3 2 1
================================================================*/

void printPat(int n)
{
    for (int i = n; i > 0; i--)
    {
        int val = n;
        for (int j = n; j > 0; j--)
        {
            for (int k = 0; k < i; k++)
                cout << val << " ";
            val--;
        }
        cout << endl;
    }
}

int main()
{
    printPat(3);
    return 0;
}