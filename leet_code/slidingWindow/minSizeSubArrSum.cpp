#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int i = 0, j = 0, sum = 0, ans = INT_MAX;
        if (nums.size() == 0) return 0;
        for (auto it : nums) sum += it;
        if (sum == target) return nums.size();
        else if (sum < target) return 0;

        sum = 0;
        while (j < nums.size()){
            if (sum + nums[j] < target){
                sum += nums[j];
                j++;
            }
            else {
                ans = min(ans, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }
        return ans;
    }
};
int main(){


    return 0;
}