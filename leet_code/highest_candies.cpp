#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans;
        for (int i = 0; i < candies.size(); i++)
        {
            candies[i] += extraCandies;
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] < candies[i - 1])
                ans.push_back("false");
            else
                ans.push_back("true");
        }
        return ans;
    }
};