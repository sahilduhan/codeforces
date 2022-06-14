#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int ans = 0, sum = 0;
        int j = 0;
        for (int i = 0;i < n;i++){
            mp[nums[i]]++;
            while (mp[nums[i]] > 1){
                mp[nums[j]]--;
                sum -= nums[j];
                j++;
            }
            sum += nums[i];
            ans = max(ans, sum);
        }
        return ans;
    }
};
int main(){


    return 0;
}