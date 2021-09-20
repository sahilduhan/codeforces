#include <bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root ==NULL) return 0;
        int left_val = minDepth(root->left);
        int right_val = minDepth(root->right);
        if(root->right == NULL) return 1+left_val;
        if(root->left->right == NULL) return 1+left_val;
        return 1+min(left_val,right_val);
    }
};