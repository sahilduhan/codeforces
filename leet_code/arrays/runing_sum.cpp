#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> sum;
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};
int main()
{
    return 0;
}