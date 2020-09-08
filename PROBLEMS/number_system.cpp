#include <bits/stdc++.h>
using namespace std;

class Number
{
    int convert_to_base10(int number, int base)
    {
        if (base == 10)
            return number;
        string s = to_string(number);
        int n = s.length() - 1;
        int ans = 0;
        for (auto a : s)
            ans += (a - '0') * pow(base, n--);
        return ans;
    }
public:
    string add(int num1, int base1, int num2, int base2) {
        long long ans = convert_to_base10(num1,base1) + convert_to_base10(num2,base2);    
        return to_string(ans);
    }

    string convert_base(int number, int a, int b)
    {
        if (a == b || !number)
            return to_string(number);
        int base_10 = convert_to_base10(number, a);
        string ans = "";
        while (base_10)
        {
            ans += to_string(base_10 % b);
            base_10 /= b;
        }
        ans += '1';
        return ans;
    }
};

int main()
{
    int n = 237283;
    Number solve;
    cout << solve.convert_base(n, 10, 5) << endl;
    return 0;
}