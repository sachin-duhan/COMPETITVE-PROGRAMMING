#include <iostream>
#include <cstring>
using namespace std;
int countDecoding(char *digits, int n)
{
    // base cases
    if (n == 0 || n == 1)
        return 1;
    if (digits[0] == '0')
        return 0;

    int count = 0; // Initialize count

    if (digits[n - 1] > '0')
        count = countDecoding(digits, n - 1);
    if (digits[n - 2] == '1' ||
        (digits[n - 2] == '2' && digits[n - 1] < '7'))
        count += countDecoding(digits, n - 2);
    return count;
}

int main()
{
    char digits[] = "1234";
    int n = strlen(digits);
    cout << "Count is " << countDecoding(digits, n);
    return 0;
}