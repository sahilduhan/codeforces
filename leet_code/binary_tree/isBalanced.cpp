#include <bits/stdc++.h>
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
    int height(TreeNode* root){
        if (!root) return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (!root) return true;

        if (isBalanced(root->left) == false) return false;
        if (isBalanced(root->right) == false) return false;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        int diff = leftHeight - rightHeight;
        if (abs(diff) < 1) return true;
        return false;
    }
};