#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size(), ans = 0;

        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        int t[101];

        t[0] = nums[0];
        t[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n;i++) t[i] = max(t[i - 2] + nums[i], t[i - 1]);

        return t[nums.size() - 1];
    }
};
int main(){


    return 0;
}