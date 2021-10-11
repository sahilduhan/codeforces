#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> output;
        int maximum = INT_MIN;
        for (auto &i : candies) maximum = max(maximum, i);
        for (auto &i : candies)
        {
            if ((i + extraCandies >= maximum)) output.push_back(true);
            else output.push_back(false);
        }
        return output;
    }
};