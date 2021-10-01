#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int final_ans = 0, j = 0;
        if (ruleKey == "type")
            j = 0;
        else if (ruleKey == "color")
            j = 1;
        else
            j = 2;
        for (int i = 0; i < items.size(); i++)
        {
            if (items[i][j] == ruleValue)
                final_ans++;
        }
        return final_ans;
    }
};
int main()
{

    return 0;
}