class Solution
{
public:
    int val(char c)
    {
        if (c == 'I')
            return 1;
        else if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D')
            return 500;
        return 1000;
    }

    int romanToInt(string s)
    {
        int ans = 0, i = s.length() - 1;
        while (i >= 0)
        {
            int curr = val(s[i]);
            while (i - 1 >= 0 && val(s[i - 1]) < curr)
            {
                int temp = val(s[i - 1]);
                if (temp < curr)
                {
                    curr -= temp;
                    i--;
                }
                else
                    break;
            }
            ans += curr;
            --i;
        }
        return ans;
    }
};