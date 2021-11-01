#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, max_sum = INT_MIN;
        for (auto it : nums){
            sum += it;
            max_sum= max(sum, max_sum);
            if(sum<0) sum=0;
        }
        return max_sum;
    }
};
