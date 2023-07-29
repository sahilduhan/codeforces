#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums, int target){
    int runningSum = 0, left = 0, ans = INT_MIN;
    for (int right = 0;right < nums.size();right++){
        runningSum += nums[right];

        while (runningSum > target){
            runningSum -= nums[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }

}
int main(){




}