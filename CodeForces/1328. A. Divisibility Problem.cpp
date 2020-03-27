#include <iostream>
using namespace std;

int input()
{
    int a;
    cin >> a;
    return a;
}

int solve(int b, int a)
{
    if (a < b) return b-a;
    else return abs(a%b);
}

int main()
{
    int test = input();
    while (test--)
        cout << solve(input(), input()) << endl;
    return 0;
}