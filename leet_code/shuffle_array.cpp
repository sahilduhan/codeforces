#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        int count = 0;
        int val = n;
        while (count < n)
        {
            ans.push_back(nums[count]);
            ans.push_back(nums[val]);
            count++;
            val++;
        }
        return ans;
    }
};