#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int>& nums, int idx, vector<vector<int>>& ans, map<vector<int>, bool>& mp){
        if (idx >= nums.size()){
            if (mp.find(nums) == mp.end()) ans.push_back(nums);
            return;
        }

        for (int i = idx;i < nums.size();i++){
            swap(nums[idx], nums[i]);
            solve(nums, idx + 1, ans, mp);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        map<vector< int>, bool> mp;
        solve(nums, 0, ans, mp);
        return ans;
    }
};
int main(){


    return 0;
}