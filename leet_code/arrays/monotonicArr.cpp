#include <bits/stdc++.h>
using namespace std;
bool isIncreasing(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++){
        if (!(nums[i] >= nums[i - 1])) return false;
    }
    return true;
}
bool isDecreasing(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++){
        if (!(nums[i] <= nums[i - 1])) return false;
    }
    return true;
}
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        return (isIncreasing(nums) || isDecreasing(nums));
    }
};
int main()
{
    return 0;
}