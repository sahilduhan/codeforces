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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root ==NULL) return 0;
        int left_diameter = diameterOfBinaryTree(root->left)+1;
        int right_diameter = diameterOfBinaryTree(root->right)+1;
        int total_diameter = max(diameterOfBinaryTree(root->right), diameterOfBinaryTree(root->left));
        return max(total_diameter, max(left_diameter, right_diameter));
    }
};
int main()
{



    return 0;
}