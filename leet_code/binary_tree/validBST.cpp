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
    void dfs(TreeNode* root, vector<int>& nums){
        if (!root) return;
        dfs(root->left, nums);
        nums.push_back(root->val);
        dfs(root->right, nums);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>nums;
        dfs(root, nums);
        for (int i = 0;i < nums.size();i++){
            if (nums[i] >= nums[i + 1]) return false;
        }
        return true;
    }
};
int main(){


    return 0;
}