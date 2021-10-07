#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j]== nums[i] && i!=j) result.push_back(nums[j]);
            }
        }
        return result;
    }
};
int main()
{

    return 0;
}