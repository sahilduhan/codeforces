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
    bool isBalanced(TreeNode* root) {
        if (check(root) != -1) return true;
        return false ;
    }
    int check(TreeNode* root)
    {
        if (root == NULL)return 0;
        int l = check(root->left);
        if (l == -1)return -1 ;
        int r = check(root->right);
        if (r == -1)return -1 ;
        if (abs(l - r) > 1)return -1 ;
        return max(l, r) + 1;
    }
};