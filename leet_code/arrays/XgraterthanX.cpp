#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        int result=0;
        for(int i=0;i<nums.size(); i++)
        {
            if(nums[i]>= nums.size()+1) result++;
        }
        if(result==0) result=-1;
        return result;
    }
};
int main()
{

    return 0;
}