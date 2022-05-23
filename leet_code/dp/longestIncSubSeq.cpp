#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        int t[n + 1];

        for (int i = 0;i < n;i++) t[i] = 1;
        int ans = t[0];

        for (int i = 1;i < n;i++)
        {
            for (int j = 0;j < i;j++)
            {
                if (nums[i] > nums[j])
                {
                    t[i] = max(t[i], 1 + t[j]);
                }
            }
            ans = max(ans, t[i]);
        }
        return ans;
    }
};
int main(){


    return 0;
}