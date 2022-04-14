#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>>ans;
    void dfs(TreeNode* root, int targetSum, vector<int>& path){
        if (!root) return;

        path.push_back(root->val);

        dfs(root->left, targetSum, path);
        dfs(root->right, targetSum, path);

        if (accumulate(path.begin(), path.end(), 0) == targetSum && !root->left && !root->right) ans.push_back(path);

        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        return ans;
    }
};
class Solution {
    vector<vector<int>> ans;
    void dfs(TreeNode* r, int t, vector<int>& path){
        if (!r) return;

        path.push_back(r->val);

        dfs(r->left, t, path);
        dfs(r->right, t, path);

        if (accumulate(path.cbegin(), path.cend(), 0) == t && !r->left && !r->right) ans.push_back(path);

        path.pop_back();
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        dfs(root, targetSum, path);
        return ans;
    }
};
int main(){


    return 0;
}