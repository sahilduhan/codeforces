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
    bool isUnivalTree(TreeNode* root) {
        int _val = root->val;
        if (root == NULL) return true;
        if (root->val != _val) return false;
        isUnivalTree(root->left);
        isUnivalTree(root->right);
        return true;
    }
};
int main(){

    return 0;
}