#include <bits/stdc++.h>
using namespace std;

void print_permutation(string str, int i, string ans)
{
    if (i >= str.length())
    {
        auto space_left = count(ans.begin(), ans.end(), '-');
        if (space_left == 0)
            cout << ans << endl;
        return;
    }

    int lst = -1;
    for (int i = ans.length() - 1; i >= 0; i--)
        if (ans[i] == str[i])
        {
            lst = i;
            break;
        }

    for (int i = lst + 1; i < ans.length(); i++)
    {
        if (ans[i] == '-')
        {
            auto temp = ans[i];
            // placing the e lement in the ans string after the last occurence of the character
            ans[i] = str[i];
            print_permutation(str, i + 1, ans);
            ans[i] = temp;
        }
    }
}

int main()
{
    print_permutation("aabb", 0, "----");
    return 0;
}
