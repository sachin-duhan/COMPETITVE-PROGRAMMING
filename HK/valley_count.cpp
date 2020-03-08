#include <bits/stdc++.h>
using namespace std;

int solve(int n, string arr)
{
    int count = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'U')
            curr++;
        if (arr[i] == 'D')
            curr--;
        if (curr == 0 && arr[i] == 'U')
            count++;
    }
    return count;
}
int main()
{
    string trip = "DUDUDUDUDUDU";
    cout << solve(trip.size(), trip) << endl;
    return 0;
}