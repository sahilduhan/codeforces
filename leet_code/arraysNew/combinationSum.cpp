#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void subSets(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& ds, int i){
        if (i == candidates.size()){
            ans.push_back(ds);
            return;
        }

        if (candidates[i] <= target){
            ds.push_back(candidates[i]);
            subSets(candidates, target - candidates[i], ans, ds, i + 1);
            ds.pop_back();
        }
        subSets(candidates, target, ans, ds, i + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        subSets(candidates, target, ans, ds, 0);
        return ans;
    }
};
int main(){


    return 0;
}