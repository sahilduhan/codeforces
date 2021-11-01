#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, max_sum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int current_sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                current_sum += nums[j];
                if (current_sum < 0) current_sum = 0;
                if(current_sum> max_sum) max_sum= current_sum;
            }
        }
        return max_sum;
    }
};
