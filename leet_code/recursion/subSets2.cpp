#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(set<vector<int>>& st, vector<int>& temp, vector<int>& nums, int i){
        st.insert(temp);
        for (int j = i; j < nums.size(); j++){
            temp.push_back(nums[j]);
            solve(st, temp, nums, j + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>>st;
        sort(nums.begin(), nums.end());
        solve(st, temp, nums, 0);
        for (auto it : st) ans.push_back(it);
        return ans;
    }
};
int main(){


    return 0;
}