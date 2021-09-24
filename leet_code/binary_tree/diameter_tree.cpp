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
    int height_tree(TreeNode* root){
        if(root==NULL) return 0;
        return max(height_tree(root->left), height_tree(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root ==NULL) return 0;
        int left_height = height_tree(root->left);
        int right_height = height_tree(root->right);
        int left_diameter = diameterOfBinaryTree(root->left);
        int right_diameter = diameterOfBinaryTree(root->right);
        return max(left_height+ right_height+1, max(left_diameter, right_diameter));
    }
};
int main()
{



    return 0;
}