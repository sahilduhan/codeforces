#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> ans;
        int frequency = 0, value = 0;
        while (value < nums.size())
        {
            for (int i = 0; i < frequency; i++) ans.push_back(value);
            frequency += 2;
            value += 2;
        }
        return ans;
    }
};