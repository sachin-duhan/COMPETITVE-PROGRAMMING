#include <iostream>
using namespace std;
int numberOfSteps(int num)
{
    int ans = 0;
    while (num>0)
    {
        if (num % 2 == 0)
            num /= 2;
        else
            num -= 1;
        ans++;
    }
    return ans;
}
int main()
{
    int n = 8;
    cout << numberOfSteps(n) << endl;
    return 0;
}