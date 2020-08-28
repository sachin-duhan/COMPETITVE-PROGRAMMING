#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        vector<string> moves;
        for (int i = 0; i < path.length(); i++)
        {
            int j = i;
            if (path[i] == '/')
                continue;
            string temp = "";
            while (path[j] != '/')
                temp += path[j++];
            moves.push_back(temp);
        }

        if (moves.size() == 0)
            return "";
        stack<string> dir;
        for (auto str : moves)
        {
            cout << str << " ";
            if (str == ".")
                continue;
            else if (!dir.empty() && str == ".." && dir.top() != "..")
                dir.pop();
            else
                dir.push(str);
        }
        cout << endl;

        while (!dir.empty())
        {
            cout << dir.top() << "/";
            dir.pop();
        }
        string ans = "";
        // do something
        return ans;
    }
};

int main()
{
    Solution solution;
    solution.simplifyPath("../sachin/../");
    return 0;
}