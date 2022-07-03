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
    int count = 0;
    void solve(TreeNode* root, long long sum, int targetSum){
        if (!root) return;
        sum = sum + root->val;
        if (sum == targetSum) count++;
        solve(root->left, sum, targetSum);
        solve(root->right, sum, targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;
        long long sum = 0;
        solve(root, sum, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return count;
    }
};
int main(){


    return 0;
}