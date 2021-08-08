#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        int count = 1;
        while (count < nums.size() / 2)
        {
            ans.push_back(count);
            ans.push_back(count + n);
            count++;
        }
        return ans;
    }
};