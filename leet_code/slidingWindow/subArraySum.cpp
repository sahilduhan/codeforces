#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    if (totalSum < target) return 0;
    int l = 0, r = 0, sum = 0, ans = INT_MAX;
    while (r < nums.size()){
        sum += nums[r];
        while (sum >= target){
            ans = min(ans, r - l + 1);
            sum -= nums[l];
            l++;
        }
        r++;
    }
    return ans;
}

int main(){



}