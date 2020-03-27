#include <iostream>
#include <math.h>
using namespace std;

int maximum69Number(int num)
{
    int temp = num, i = 0;
    while (temp)
    {
        if (temp % 10 == 6)
            i++;
        temp /= 10;
    }
    if (i == 0)
        return num;
    return (num + pow(10, i - 1) * 3);
}

int main()
{
    int n = 9669;
    cout << maximum69Number(n) << endl;
    return 0;
}