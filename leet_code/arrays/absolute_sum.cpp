#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
    int final_val=0;
    for(int i=0; i<nums.size();i++)
    {
        for(int j=i; j<nums.size();j++) if(abs(nums[i]-nums[j])==k) final_val++;
    }
    return final_val;    
    }
};
int main()
{


    return 0;
}