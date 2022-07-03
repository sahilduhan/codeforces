#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>temp;
    void solve(int start, vector<vector<int>>& graph, vector<vector<int>>& ans){
        temp.push_back(start);
        for (auto it : graph[start]) solve(it, graph, ans);
        if (start == graph.size() - 1) ans.push_back(temp);
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        solve(0, graph, ans);
        return ans;
    }
};
int main(){

    return 0;
}