#include <bits/stdc++.h>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)
int input()
{
    int n;
    cin >> n;
    return n;
}
void print(int a, int b)
{
    cout << a << " " << b;
}
int main()
{
    int arr[5];
    loop(i, 5) arr[i] = input();
    loop(i, 2) swap((int)i, 5 - (int)i);
    loop(i, 5) cout << arr[i] << " ";
    return 0;
}