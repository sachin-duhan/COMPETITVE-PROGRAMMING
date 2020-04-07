#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n)
{
    string prev = "1";
    string curr = "1";

    for (int i = 2; i <= n; i++)
    {
        curr.clear();
        int lastIndex = 0; // index where the prev(diffrent) number was last seen

        for (int j = 0; j < prev.size(); j++)
        {

            // we have encounterd a diffrent number
            if (prev[j] != prev[lastIndex])
            {
                // append count of previous number to current string
                curr.append(to_string(j - lastIndex));

                // append previous number to current string
                curr.push_back(prev[lastIndex]);

                // make the new numbers position as last seen index for it
                lastIndex = j;
            }
        }

        // for the last number in the string as the above for loop will not consider it
        curr.append(to_string(prev.size() - lastIndex));
        curr.push_back(prev[lastIndex]);

        prev = curr;
    }
    return curr;
}