#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    int i = digits.size() - 1;
    if (digits[i] == 9)
    {
        int carry = 1;
        // digits.push_back(0);
        while (true)
        {
            digits[i] += carry;
            if (digits[i] % 10 != 0 || !i)
            {
                if (!i && digits[i] == 10)
                {
                    digits[i] -= 9;
                    digits.push_back(0);
                }
                break;
            }
            digits[i] %= 10;
            i--;
        }
    }
    else
        digits[i]++;
    return digits;
}

int main()
{
    vector<int> v({8, 9}), ans = plusOne(v);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}