#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<int>temp, vector<int>& candidates, int target, int pos){
        if (target == 0){
            ans.push_back(temp);
            return;
        }
        if (target < 0) return;
        for (int i = pos;i < candidates.size();i++){
            if (i > pos && candidates[i] == candidates[i - 1]) continue;
            temp.push_back(candidates[i]);
            helper(ans, temp, candidates, target - candidates[i], i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        helper(ans, temp, candidates, target, 0);
        return ans;
    }
};
int main(){


    return 0;
}