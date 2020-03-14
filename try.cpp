#include <iostream>
using namespace std;

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout << 12.5 + 3 * 13.5 << endl;
    cout << *ptr2 << endl;
    return 0;
}