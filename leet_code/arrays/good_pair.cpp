#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] and i<j) count++;
            }
        }
        return count;
    }
};