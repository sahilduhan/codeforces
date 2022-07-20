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

void dfs(vector<vector<int>>& res, vector <int>& v, vector <int>& A, int B, int i){
    if (i == A.size()){
        if (B == 0) res.push_back(v);
        return;
    }
    if (A[i] <= B){
        v.push_back(A[i]);
        dfs(res, v, A, B - A[i], i);
        v.pop_back();
    }
    dfs(res, v, A, B, i + 1);
}
vector<vector<int> > combinationSum(vector<int>& A, int B) {
    sort(A.begin(), A.end());
    auto ip1 = unique(A.begin(), A.end());
    A.resize(distance(A.begin(), ip1));
    vector<vector <int>> res;
    vector <int> v;
    dfs(res, v, A, B, 0);
    sort(res.begin(), res.end());
    auto ip2 = unique(res.begin(), res.end());
    res.resize(distance(res.begin(), ip2));
    return res;
}


int main(){


    return 0;
}