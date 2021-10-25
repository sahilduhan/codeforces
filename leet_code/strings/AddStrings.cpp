#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int n1 = stoi(num1), n2 = stoi(num2);
        int ans = n1 + n2;
        string finalAns = to_string(ans);
        return finalAns;
    }
};
int main()
{

    return 0;
}