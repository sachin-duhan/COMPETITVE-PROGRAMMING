#include <iostream>
using namespace std;
bool isPowerOfThree(int n)
{
    int val = 3;
    while (true)
    {
        val *= 3;
        if (val == n)
            return true;
        else if (val > n)
            return false;
    }
}

int main()
{
    int n = 27;
    cout << isPowerOfThree(n) << endl;
    return 0;
}