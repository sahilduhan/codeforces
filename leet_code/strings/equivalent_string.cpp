#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string ans_1 = "", ans_2 = "";
        for (auto i : word1) ans_1 += i;
        for(auto i: word2) ans_2 += i;
        return ans_1 == ans_2;
    }
};
int main()
{
    return 0;
}