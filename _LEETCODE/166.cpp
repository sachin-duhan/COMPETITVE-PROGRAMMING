
#include <bits/stdc++.h>
using namespace std;

/*===== TREENODE CODE =====
struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode * left, TreeNode * right): val(x), left(left), right(right) {}
};
*/

/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/

class Solution
{
public:
    string fractionToDecimal(int nume, int den)
    {

        if (nume == 0)
            return "0";                              // Handling base case
        long long num = nume;                        // Convert to long long to avoid overflow.
        int sign = ((num < 0) ^ (den < 0)) ? -1 : 1; // Check if sign is negative.
        num = abs(num);
        den = abs(den);                    // make them positive
        unordered_map<int, int> rem_map;   // a map to store the index  of each reminder
        string bef_dec = "", aft_dec = ""; // Empty string
        if (sign < 0)
            bef_dec = "-";               // if sign is negative, appen in begening
        int remind = num % den;          // reminder
        bef_dec += to_string(num / den); // take case of digits before decimal
        num = remind;                    // change the new numerator = reminder of previous
        int i = 0;                       // to label positions of diferent reminders

        while (rem_map.find(remind) == rem_map.end() && remind != 0)
        { // check if that reminder is already encountered or not

            rem_map[remind] = ++i;       // insert the rem and position into map
            num = (long long)(num * 10); // basic math
            remind = num % den;
            aft_dec = aft_dec + to_string(num / den); // append to back in a string
            num = remind;                             // update numerator
        }

        if (remind == 0)
        { // if rem is 0, two cases. 1: 0 after decimal or terminating decimal
            if (aft_dec == "")
                return bef_dec;
            else
                return bef_dec + "." + aft_dec;
        }
        else
        {                                                                                                                    //  for non repeating decimal
            return bef_dec + "." + aft_dec.substr(0, rem_map[remind] - 1) + "(" + aft_dec.substr(rem_map[remind] - 1) + ")"; /// required format
        }
    }
};

int main()
{
    Solution solution;
    cout << solution.fractionToDecimal(2, 3) << endl;
    return 0;
}
